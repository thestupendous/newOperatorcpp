#include<iostream>
#include<algorithm>
using namespace std;
void* operator new [] (size_t n, int val)
{
	int *ptr =(int*) operator new(n);
	fill(ptr,ptr+n,val);
	cout<<"overloaded array new\n";
	return ptr;
}
int main()
{
	int *p = new (3) int[5];
	p[1]=99;
	int *q = new int[5];
//	memset(q,90,5*sizeof(int));
	for(int i=0;i<5;i++)
	{
		cout<<*(p+i)<< ' ';
	}
	cout<<endl;
//	for(int i=0;i<5;i++)
//	{
//		cout<<*(q+i)<< ' ';
//	}
//	cout<<endl;

}
