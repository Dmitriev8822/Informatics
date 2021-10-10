#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int h1,m1,s1,u1;
    int h2,m2,s2,u2;
    double r;
    //cin >> h1 >> m1 >> s1 >> u1;
    //cin >> h2 >> m2 >> s2 >> u2;
    //cin >> r;
    //h1= 3; m1=58; s1=58; u1=44;
    //h2=10; m2=10; s2= 7; u2=22;
    //r = 22.25;

    h1= 6; m1=0; s1=0; u1=0;
    h2= 5; m2=0; s2=0; u2=0;
    r = 10.0;


    double D1 = h1 + m1/60.0 + s1/60.0/60.0 + u1/60.0/60.0/100.0;
    double D2 = h2 + m2/60.0 + s2/60.0/60.0 + u2/60.0/60.0/100.0;

    double D = D2-D1;

    D = D*30.0;
    if(D < 0)
        D = 360 + D;

    double S = M_PI * r*r*D/360.0;
    cout << fixed;
    cout.precision(3);
    cout << S << endl;

    return 0;
}
