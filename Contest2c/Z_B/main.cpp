#include <iostream>


using namespace std;

struct segment_t
{
    int x1,y1;
    int x2,y2;
    double k;
    double b;
    bool v;   //индикатор вертикального положения отрезка.
              //В таком случае К стремиться к бесконечности.
};

bool testEntry(double x1, double x2, double x3, double x4)
{
    if(x1 > x2)
    {
        double t;
        t  = x2;
        x2 = x1;
        x1 = t;
    }
    if(x3 > x4)
    {
        double t;
        t  = x3;
        x3 = x4;
        x4 = t;
    }
    if((x1 >= x3 && x1 <= x4)
    || (x2 >= x3 && x2 <= x4)
    || (x3 >= x1 && x3 <= x2)
    || (x4 >= x1 && x4 <= x2)
    )
        return true;

    return false;
}

void prepareSegment(segment_t &A)
{
    A.v = false;
    int dx = (A.x2 - A.x1);
    if(dx != 0)
    {
        A.k = (A.y2 - A.y1)/(A.x2 - A.x1);
        A.b = A.y1 - A.x1 * A.k;
    }
    else
    {
        A.v = true;
        A.b = A.x1;
    }
}
//Проверка на пересечение
int testCrossing(segment_t A, segment_t B)
{
    double dk = A.k - B.k;
    if(dk != 0)
    {
        double x = (B.b - A.b)/dk;
        if(testEntry(x,x,A.x1,A.x2)
        && testEntry(x,x,B.x1,B.x2))
            return 1;
    }
    return 0;
}
//Проверка на совпадение (черахда)
int testChexarda(segment_t A, segment_t B)
{
    if(A.k == B.k
    && A.b == B.b
    && A.v == B.v
    && ((   testEntry(A.x1, A.x2, B.x1,B.x2)
         || testEntry(A.y1, A.y2, B.y1, B.y2)
        )))
        return 2;
    return 0;
}

int main()
{
    segment_t SA,SB;
//    cin >> SA.x1 >> SA.y1 >> SA.x2 >> SA.y2;
//    cin >> SB.x1 >> SB.y1 >> SB.x2 >> SB.y2;

    //SA = {2,3,2,7};
    //SB = {1,2,6,8};
    //SA = {0,3,3,0};
    //SB = {2,2,8,8};
    SA = {-2,-2,1,1};
    SB = {110,110,0,0};

    int res;
    prepareSegment(SA);
    prepareSegment(SB);
    if(SA.v || SB.v || SA.k == 0 || SB.k == 0)  //если хотябы один отрезок вертикальный или горизонтальный
    {
        if(testEntry(SA.x1, SA.x2, SB.x1, SB.x2)
        || testEntry(SA.y1, SA.y2, SB.y1, SB.y2))
            return 1;
    }
    res = testChexarda(SA, SB);
    if(res != 0)
    {
        cout << res;
        return 0;
    }

    res = testCrossing(SA, SB);
    if(res != 0)
    {
        cout << res;
        return 0;
    }
    cout << 0;
    return res;
}
