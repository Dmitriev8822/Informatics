#include <iostream>

using namespace std;

void insertionsort(int arr[], int n);
void input(int arr[], int n);
void print(int arr[], int n);

int main()
{
    int arr[10000], n;
    cin >> n;
    input(arr, n);
    insertionsort(arr, n);

    int sum = 0;

    int c = n / 3;
    int i = n - 1;

    for(; c > 0; c--, i-=3)
    {
        int subarr[3] = {arr[i], arr[i - 1], arr[i - 2]};
        insertionsort(subarr, 3);
        sum += subarr[2] + subarr[1];
    }

    for(; i >= 0; i--)
    {
        sum += arr[i];
    }

    cout << sum << endl;

    return 0;
}

void insertionsort(int arr[], int n)
{
    int x, j;
    for(int i = 1; i < n; i++)
    {
        x = arr[i];
        j = i - 1;
        while(arr[j] > x && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }
}

void input(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        cin >> arr[i];
}

void print(int arr[], int n){
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
