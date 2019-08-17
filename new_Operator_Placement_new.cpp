#include<iostream>
using namespace std;
int main()
{
	unsigned char buf[sizeof(int)*2];
	int *pInt = new (buf) int(34);
	int *qInt = new (buf+sizeof(int)) int(99);
    
	int *pBuf = (int*) buf;
	int *qBuf = (int*) (buf+sizeof(int));
	
	cout<<"Buf addr  Int addr"<<endl;
	cout<<pBuf<<"  "<<pInt<<endl<<qBuf<<"  "<<qInt<<endl;
	cout<<*pBuf<<"    "<<*qBuf<<endl;
	
	return 0;
}

