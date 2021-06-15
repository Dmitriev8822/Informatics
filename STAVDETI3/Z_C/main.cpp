#include <iostream>

using namespace std;

typedef struct { int a; int b;} tent_t;

bool test1(tent_t *p, int k, int w, int i0, int i1, int i2)
{
    int a = 0;
    int b = 0;
    if(i0 >= 0)
    {
        a = p[i0].a;
        b = p[i0].b;
    }
    if(i1 >= 0)
    {
        a += p[i1].a;
        b += p[i1].b;
    }
    if(i2 >= 0)
    {
        a += p[i2].a;
        b += p[i2].b;
    }
    if(b >= k  && a <= w)
        return true;

    return false;
}

int main()
{
    //tent_t tent[3]  = {{5,5},{6,6},{7,7}};
    tent_t tent[3];
    int k; // = 10;
    int w; // = 10;
    cin >> k >> w;
    for(int j = 0; j < 3; j++)
        cin >> tent[j].a >> tent[j].b;

    while(1)
    {
        if(test1(tent, k, w,  0, -1, -1)) break;
        if(test1(tent, k, w,  0,  1, -1)) break;
        if(test1(tent, k, w,  0, -1,  2)) break;
        if(test1(tent, k, w,  0,  1,  2)) break;
        if(test1(tent, k, w, -1,  1, -1)) break;
        if(test1(tent, k, w, -1,  1,  2)) break;
        if(test1(tent, k, w, -1, -1,  2)) break;

        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    return 0;
}
