#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[256];
    cin.getline(str,256);
    int len = strlen(str);
    int i = 0;
    int j = len-1;
    while(i < j)
    {
        //cout << str[i] << " " << str[j] << endl;
        swap(str[i], str[j]);
        i++; j--;
    }
    cout << str << endl;
    return 0;
}
