#include<iostream>
using namespace std;
void process(int*p) {
	for(int i=0;i<3;i++)
	    cin>>*(p+i);
	for(int i=2;i>=0;i--)
	    cout<<*(p+i)<<" ";
}
int main()
{
	int*p;
	p= new int[3];
	process(p);
	delete[] p;
	return 0;
}
