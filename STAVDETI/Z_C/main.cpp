#include <iostream>

using namespace std;

//int*** new3DArray(int x, int y, int z)
//{
//    int ***res = new int**[x];
//    for(int j=0; j < x; j++)
//    {
//        res[j] = new int*[y];
//        for(int k=0; k < y; k++)
//        {
//            res[j][k] = new int[z];
//        }
//    }
//    return res;
//}
//void delete3DArray(int*** p, int x, int y)
//{
//    for(int j=0; j < x; j++)
//    {
//        for(int k=0; k < y; k++)
//        {
//            delete[] p[j][k];
//        }
//        delete[] p[j];
//    }
//    delete[] p;
//}

int main()
{
    int N, M, K, I;
    cin >> N >> M >> K >> I;
    // создаем трехмерный массив
    //int ***arr = new3DArray(N,M,K);

    //вводим данные в массив
    int i = N*M*K;
    for(int x = 0; x < N; x++)
        for(int y = 0; y < M; y++)
            for(int z = 0; z < K; z++)
            {
                //cin >> arr[x][y][z];
                //printf("i=%d, V=%d, %d:%d:%d\n", i--, arr[x][y][z], x,y,z);
                int v;
                cin >> v;
                if(i-- == I)
                {
                    cout << ++x << " " << ++y << " " << ++z << " " << v << endl;
                    //printf("%d %d %d %d\n", ++x, ++y, ++z, v);
                    return 0;
                }
            }
//    I--;
//    i = 0;
//    int x = N-1;
//    for(; x>=0; x--)
//    {
//        int y = M-1;
//        for(; y >= 0; y--)
//        {
//            int z = K-1;
//            for(; z >= 0; z--)
//            {
//                if(i == I)
//                {
//                    printf("%d %d %d %d\n", x+1, y+1, z+1, arr[x][y][z]);
//                    delete3DArray(arr,N,M);
//                    return 0;
//                }
//                i++;
//            }
//        }
//    }
//    delete3DArray(arr,N,M);
//    return 0;
}
