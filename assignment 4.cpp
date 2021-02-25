#include<iostream>
using namespace std;
struct Complex {
	int x,y;
};
Complex operator*(Complex &p1, Complex &p2){
	struct Complex p3= {0,0};
	p3.x= p1.x*p2.x - p1.y*p2.y;
	p3.y= p1.x*p2.y + p1.y*p2.x;
	return p3;
}
int main()
{
	struct Complex p1,p2;
	cin>>p1.x>>p1.y>>p2.x>>p2.y;
	struct Complex p3=p1*p2;
	cout<< p3.x<<" "<<p3.y;
	return 0;
	
}
