#include <iostream>
#include <string>

using namespace std;

int stk[5];

bool containsAction(char c, const string &str)
{
    return (str.find(c) != string::npos);
}

int main()
{
    int h = 0;
    while(1)
    {
        bool f = true;
        string inp;
        cin >> inp;
        try
        {
            int res = stoi(inp);
            stk[h++] = res;
        }
        catch(std::invalid_argument &e)
        {
            f = false;
        }
        catch(...)
        {
            f = false;
        }
        if(f)
            continue;

        if(containsAction('+', inp))
        {
            int a = stk[--h];
            int b = stk[--h];
            stk[h++] = a+b;
        }
        else if(containsAction('-', inp))
        {
            int a = stk[--h];
            int b = stk[--h];
            stk[h++] = a-b;
        }
        else if(containsAction('*', inp))
        {
            int a = stk[--h];
            int b = stk[--h];
            stk[h++] = a*b;
        }
        else if(containsAction('/', inp))
        {
            int a = stk[--h];
            int b = stk[--h];
            if(b != 0)
                stk[h++] = a/b;
            else
                return -1;
        }
        else
            break;
    }
    cout << stk[--h];
    return 0;
}
