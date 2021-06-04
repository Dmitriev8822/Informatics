#include<iostream>
using namespace std;
main()
{
int x[1001],i,N,A,B,C,D,y;
cin>>N>>A>>B>>C>>D;

for(i=1;i<=N;i++)
x[i]=i;

for(i=A;i<=(A+B)/2;i++)
{
y=x[i];
x[i]=x[B+A-i];
x[B+A-i]=y;
}

for(i=C;i<=(C+D)/2;i++)
{
y=x[i];
x[i]=x[D+C-i];
x[D+C-i]=y;
}
for(i=1;i<=N;i++)
cout<<x[i]<<' ';
}
