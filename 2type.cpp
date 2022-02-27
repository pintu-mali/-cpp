#include "iostream"
using namespace std;
int main()
{
int x[5]={2,4,6,8,10};
cout<<x<<endl;
cout<<&x<<endl;
cout<<&x[0]<<endl;
int *p;
p=x;//providing address of x to p//
cout<<p<<endl;
cout<<*p<<endl;
cout<<x[0]<<endl;
cout<<*(p+1)<<endl;
cout<<x[1]<<*(x+1)<<endl;
}

