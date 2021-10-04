#include <iostream>

using namespace std;

#define M_max 11
#define N_max 11
#define STREET 1
#define HOUSE  2
#define GARDEN 3

unsigned char P[M_max][N_max];
int N;
int M;
int V;
int H;

int main()
{
    cin >> M >> N >> V >> H;
    //M=8; N=10; V=3; H=3;
    //int VV[] = {1,4,8};
    //int HH[] = {1,6,10};

    for(int y=0; y<N; y++)
        for(int x=0; x<M; x++)
            P[x][y] = GARDEN;
    for(int j=0; j<V; j++)
    {
        int x;
        cin >> x;
        x--;
        //x = VV[j]-1;
        for(int y=0; y<N; y++)
            P[x][y] = STREET;
    }
    for(int j=0; j<H; j++)
    {
        int y;
        cin >> y;
        y--;
        //y = HH[j]-1;
        for(int x=0; x<M; x++)
            P[x][y] = STREET;
    }
    int A = 0;
    int B = M*N;
    int C = 0;

    for(int y=0; y<N; y++)
        for(int x=0; x<M; x++)
        {
            unsigned char p = P[x][y];
            while(1)
            {
                if(p == STREET){ C++; B--; break;}
                if(p == GARDEN)
                {
                    if(P[x][y+1] != STREET
                    && P[x][y-1] != STREET
                    && P[x+1][y] != STREET
                    && P[x-1][y] != STREET)
                    break;
                }
                P[x][y] = HOUSE;
                A++; B--;
                break;
            }
        }
    cout << A << " " << B << " " << C << endl;

    return 0;
}
