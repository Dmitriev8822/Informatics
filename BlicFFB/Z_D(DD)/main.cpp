#include <iostream>

using namespace std;
int b[108];
int main(){
string a;
cin >> a;
int sum ,n;
for(int i=0;i<a.size();i++){
sum+=a[i]-'0';
b[i]=a[i]-'0';
}
int ch=0;
for(int i=0;i<a.size();i++){
if(b[i]==9){ch++;}
}
if(ch==a.size()){
b[a.size()]=0;
for(int i=0;i<a.size();i++){
cout << a[i];
}
return 0;
}
n=sum%3;
int k=0;
for(int i=0;i<a.size();i++){
for(int j=9;j>b[i];j--){
if((j-b[i])%(3-n)==0){
b[i]=j;k=1;break;
}
}
if(k==1){break;}}
for(int i=0;i<a.size();i++){
cout << b[i];
}
}
