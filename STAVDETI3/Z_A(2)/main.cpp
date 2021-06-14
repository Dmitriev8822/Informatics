#include <iostream>

using namespace std;
#define ARRAYSIZE 4

void printArray(char **p, int maxY, int maxX)
{
    for(int y = 0; y < maxY ; y++)
    {
        for(int x = 0; x < maxX; x++)
        {
            cout << p[x][y] << " ";
        }
        cout << endl;
    }

}

int main()
{
    char p[][] = {
        {'1','2','3','w'},
        {'4','5','6','e'},
        {'7','8','9','e'},
        {'10','11','12','f'}
        };
    //printArray(p, 4 , 4);


    return 0;
}
