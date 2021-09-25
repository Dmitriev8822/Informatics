#include <iostream>

using namespace std;

#define INF 2147483646
#define MAXNUM 1000

int cookie_n;
int cookies[MAXNUM];
//int cookies[] = {3,5};
//int cookies[] = {3,5};
//int values[MAXNUM];
//bool ready[MAXNUM];

int simple_solve(int x)
{
    if (x < 0) return INF;
    if (x == 0) return 0;
    int best = INF;
    for (int j=0; j < cookie_n; j++)
    {
        int c = cookies[j];
        best = min(best, simple_solve(x-c)+1);
    }
    return best;
}

//int solve(int x) {
//    if (x < 0) return INF;
//    if (x == 0) return 0;
//    if (ready[x]) return values[x];
//    int best = INF;
//    for (int j=0; j<cookie_n; j++)
//    {
//        int c = cookies[j];
//        best = min(best, solve(x-c)+1);
//    }
//    ready[x] = true;
//    values[x] = best;
//    return best;
//}

int main()
{
//    int K[] = {3, 6, 7, 11, 12};
//    int n = sizeof(K)/sizeof(int);

    int n;
    int K[1000];

    cin >> cookie_n;
    for(int j = 0; j < cookie_n; j++)
        cin >> cookies[j];
    cin >> n;
    for(int j = 0; j < n; j++)
        cin >> K[j];
//    cookie_n = 2;
//    int kmax = 0;
//    for(int j = 0; j < n; j++)
//        if(kmax < K[j])
//            kmax = K[j];
//
//    values[0] = 0;
//    for(int x = 0; x <= kmax; x++)
//    {
//        ready[x] = false;
//        values[x] = INF;
//        for(int i = 0; i < cookie_n; i++)
//        {
//            int cookie = cookies[k];
//            if(x-cookie >= 0)
//            {
//                values[x] = min(values[x], values[x - cookie] + 1);
//                ready[x] = true;
//            }
//        }
//    }

    for(int j = 0; j < n; j++)
    {
        int k = K[j];

        if(simple_solve(k) != INF)
            cout << "1";
        else
            cout << "0";
        if(j + 1 < n)
            cout << " ";
    }
    cout << endl;
    return 0;
}
