#include <iostream>
//#include <fstream>
using namespace std;

int main()
{
    //ifstream fin("input.txt");
    //ofstream fout("output.txt");

    int n;
    cin >> n;
    //fin >> n;
    int maxF = 0;
    int maxV = 0;

    for(int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        //fin >> t;
        if(t <= maxV)
            continue;
        if(t > maxF)
        {
            maxV = maxF;
            maxF = t;
        }
    }

    //fout << maxV << endl;
    cout << maxV << endl;
    //fout.close();
    //fin.close();
    return 0;
}
