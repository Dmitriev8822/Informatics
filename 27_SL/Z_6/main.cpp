#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int len = 0;
    for(int j=0; j < 26; j++)
    {
        len = len*2 + 1;
        char c = j + 'A';
        printf("%d: %c\t%d\n", j, c, len);
    }


    return 0;
}
