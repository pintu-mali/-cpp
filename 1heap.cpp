#include "iostream"
using namespace std;
int main()
{
int *p = (int*)malloc(2*sizeof(int));//this syntax supported in c/c++
*p=6;
cout<<*p<<'\n';

free(p);//to free space after use otherwise memory leak issue occurs
cout<<*p<<endl;

int *h = new int[2];//this is another way to get space from heap memory only supported in c++
h[0]=5;//*h
h[1]=10;//*(h+1)
cout<<*h<<'\n';

delete h;//supported in c++ to free space

cout<<*h<<endl;
}
