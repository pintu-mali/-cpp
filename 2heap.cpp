#include "iostream"
using namespace std;
int main()
{
int a,b,*p;
cin>>a;
p=(int*)malloc(a*sizeof(int));
for(int i=0;i<a;i++)
{
cin>>p[i];
}
for(int j=0;j<a;j++)
{
cout<<p[j];
}
cout<<"enter value for more space:";
cin>>b;
p=(int*)malloc(b*sizeof(int));
for(int k=0;k<b;k++)
{
cout<<p[k];//the adress will change u will find only empty data
}
}
