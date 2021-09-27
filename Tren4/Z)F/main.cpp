#include <iostream>
#include <cstdlib>

using namespace std;


typedef struct {int x1; int y1; int x2; int y2; int pwr; int wave;} Pipe_t;

static unsigned int N;
static unsigned int M;
static unsigned int NM;
//static Pipe_t Pipe[1101];
static Pipe_t Pipe[] =
{
    {0,5,0,5,2,0},
    {5,4,5,4,8,0},
    {0,3,0,5,4,0},
    {0,3,2,4,1,0},
    {2,4,0,5,1,0},
    {3,3,2,4,2,0},
    {3,3,5,4,6,0},
    {2,0,5,4,3,0},
    {0,3,2,0,6,0},
    {2,0,2,0,0,0}
};


int resolve(Pipe_t *pP)
{
    pP->wave = pP->wave+ 1;
    cout << "[" << pP->x1 << ":" << pP->y1 << "][" << pP->x2 << ":" << pP->y2 << "] pwr = " << pP->pwr << " wave=" << pP->wave << endl;
    int t = 0;
    for(unsigned int index = 0; index < NM; index++)
    {
        Pipe_t *p = &Pipe[index];
        if(p->wave >= pP->wave)
            continue;
        if(p == pP)
            continue;
        if(p->x1 != pP->x2 || p->y1 != pP->y2)
        {
            int t = p->x1;
            p->x1 = p->x2;
            p->x2 = t;
                t = p->y1;
            p->y1 = p->y2;
            p->y2 = t;
        }
        if(p->x1 != pP->x2 || p->y1 != pP->y2)
            continue;

        p->wave = pP->wave;
        if(p->x1 == p->x2 && p->y1 == p->y2)
            t += p->pwr;
        else
            t += resolve(p);
    }
    if(t >= pP->pwr)
    {
        cout << "[" << pP->x1 << ":" << pP->y1 << "][" << pP->x2 << ":" << pP->y2 << "] pwr = " << pP->pwr << " wave=" << pP->wave << " res=" << pP->pwr << endl;
        return pP->pwr;
    }
    cout << "[" << pP->x1 << ":" << pP->y1 << "][" << pP->x2 << ":" << pP->y2 << "] pwr = " << pP->pwr << " wave=" << pP->wave << " res=" << t << endl;
    return t;
}


int main()
{
    //cin >> N >> M;
    N = 2;
    M = 7;
    unsigned int index = 0;
    int max_pwr = 10;
    //вводим список ульев
//    for(; index < N; index++)
//    {
//        Pipe_t *p = &Pipe[index];
//        cin >> p->x1 >> p->y1 >> p->pwr;
//        p->x2 = p->x1;
//        p->y2 = p->y1;
//        p->wave = 0;
//        max_pwr += p->pwr;
//    }
    NM = N+M;
    //вводими список труб
//    for(; index < NM; index++)
//    {
//        Pipe_t *p = &Pipe[index];
//        cin >> p->pwr >> p->x1 >> p->y1 >> p->x2 >> p->y2;
//        p->wave = 0;
//    }
    //вводим координаты дома
    NM += 1;
//    index++;
//    Pipe_t *p = &Pipe[index];
//    cin >> p->x1 >> p->y1;
//    p->x2 = p->x1;
//    p->y2 = p->y1;
//    p->wave = 0;
    index = NM-1;
    Pipe_t *p = &Pipe[index];
    p->pwr = max_pwr;
    cout << resolve(p) << endl;

    return 0;
}
