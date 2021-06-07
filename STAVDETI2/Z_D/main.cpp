#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct {int id; int rating;} rec_t;

void printRaiting(rec_t *p, int n)
{
    for(int j=0; j < n; j++)
    {
        cout << p->id << " " << p->rating << endl;
        //cout << p[j].id << " " << p[j].rating << endl;
        p++;
    }
    cout << endl;
}

int compareRec(const void *pa, const void *pb)
{
    const rec_t *p1 = static_cast<const rec_t*>(pa);
    const rec_t *p2 = static_cast<const rec_t*>(pb);
    if(p1->rating < p2->rating)
        return 1;
    if(p1->rating > p2->rating)
        return -1;
    return 0;
}

int main()
{
    rec_t A[] = {
                {101, 80},
                {305, 90},
                {200, 14},
                {100, 91},
                {500, 25}
                };
    int n = sizeof(A)/sizeof(rec_t);
    //rec_t A[1000];
    //int n;
    //cin >> n;
    //for(int j=0; j<n; j++)
    //{
    //    rec_t t;
    //    cin >> t.id >> t.rating;
    //    A[j] = t;
    //}
    printRaiting(A, n);
    qsort(A, n, sizeof(rec_t),compareRec);
    printRaiting(A, n);

    return 0;
}
