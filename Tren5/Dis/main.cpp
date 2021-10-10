#include <iostream>

using namespace std;

int buf[1001];

int main()
{
    int hand = 700;
    int leg = 750;
    int eye = 800;
    int head = 850;
    int mini = 1001;
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    int cnt4 = 0;
    int minicnt0 = 1001;
    int minicnt1 = 1001;
    int minicnt2 = 1001;
    int minicnt3 = 1001;
    int minicnt4 = 1001;

    for(int i = 0; i < 300; i++)
    {

        for(int x = 0; x < 1000-300+i; x++)
            buf[x]++;

        for(int j = 0; j < 250; j++)
        {
            for(int x = 0; x < 1000-250+j; x++)
                buf[x]++;

            for(int z = 0; z < 200; z++)
            {
                for(int x = 0; x < 1000-200+z; x++)
                    buf[x]++;

                for(int h = 0; h < 150; h++)
                {
                    for(int x = 0; x < 1000-150+h; x++)
                        buf[x]++;

                    for(int k = 0; k < 1000; k++)
                    {
                        int g = buf[k];
                        if(g == 0)
                            cnt0++;
                        else if(g == 1)
                            cnt1++;
                        else if(g == 2)
                            cnt2++;
                        else if(g == 3)
                            cnt3++;
                        else if(g == 4)
                            cnt4++;

                        if(cnt0 < minicnt0)
                            minicnt0 = cnt0;
                        if(cnt1 < minicnt1)
                            minicnt1 = cnt1;
                        if(cnt2 < minicnt2)
                            minicnt2 = cnt2;
                        if(cnt3 < minicnt3)
                            minicnt3 = cnt3;
                        if(cnt4 < minicnt4)
                            minicnt4 = cnt4;

                        cnt0 = 0;
                        cnt1 = 0;
                        cnt2 = 0;
                        cnt3 = 0;
                        cnt4 = 0;
                    }
                        cout << "i = " << i << " ";
                        cout << "j = " << j << " ";
                        cout << "z = " << z << " ";
                        cout << "h = " << h << endl;
                }
            }
        }
    }
    cout << "cnt0 = " << cnt0 << endl;
    cout << "cnt1 = " << cnt1 << endl;
    cout << "cnt2 = " << cnt2 << endl;
    cout << "cnt3 = " << cnt3 << endl;
    cout << "cnt4 = " << cnt4 << endl;
    cout << "End" << endl;
    return 0;
}
