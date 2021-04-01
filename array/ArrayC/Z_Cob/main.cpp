#include <iostream>

using namespace std;

/** \details ������ gt ����� ��� �������� ������������ �����, ���
��������� �� ����������� � �������� ���������� �����. ����������
���������� � ������ ����� �������� � ���������� gt_size
*/
static int gt[101];
static int gt_size;

/** \details ���� ������� value ��� ��������� � ������� gt, ��
������������ -1, ����� ��� �������� ��������� � ������, ����������
���������� ����� - gt_size.
*/
int gt_add(int value)
{
    for(int j = 0; j < gt_size; j++)
    {
        if(gt[j] == value)
            return -1;
    }

    gt[gt_size] = value;
    gt_size++;
    return 0;
}

int main()
{
    int n;
    int a[101];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    gt_size = 0;
    int res = 0;
    for(int i = 0; i < n; i++)
    {
        int j = a[i];
        if(gt_add(j) == 0)
        {
            /* ����� ���� ����� �������� ������� */
            /* ��������� ���������� ���������� �����...*/
            int cnt = 0;
            for(int k = 0; k < n; k++)
            {
                {
                    if(j == a[k])
                        cnt++;
                }
            }
            /* ���������� ���������� ���.*/
            res += cnt/2;
        }
    }
    cout << res << endl;
    return 0;
}
