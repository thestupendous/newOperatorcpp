#include<iostream>
using namespace std;
void* operator new(size_t n)
{
	cout<<"overloaded simple new operator\n";
	void *ptr;
	ptr = malloc(n);
	return ptr;
}

int main()
{
	int *p = new  int(4);
	int *q = new int;
	*q = 57;
	cout<<*q<<endl;


	return 0;
}
