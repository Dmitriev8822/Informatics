#include <iostream>
using namespace std;
int c;

int fib(int n){
    c++;
    //if(n == 0 || n == 1)
        //return 1;
    int sm1 = 1;
    int sm2 = 1;
    int s = 0;
    for(int i = 1; i < n; i++)
    {
        s = sm1*2 + sm2;
        sm2 = sm1;
        sm1 = s;
    }
    return s;
}
int main()
{
    int n;
    c = 0;
    cin >> n;
    cout << fib(n) << endl;
    cout << c << endl;
}
