#include<iostream>
#include<string>
using namespace std;
class Complex{
	const int _r,_i;
	public:
		Complex(): _r(0), _i(0) { }
		Complex(int r): _r(r), _i(0) { }
		Complex(int r,int i): _r(r), _i(i) { }
		void show() { cout<< _r<<" + "<<_i<<"i"<<endl;}
		int norm() { return _r *_r + _i * _i;}		
};
int main()
{
	int a,b;
	cin>>a>>b;
	Complex c1;
	Complex c2(a);
	Complex c3(a,b);
	c1.show();
	c2.show();
	c3.show();
	cout<<c1.norm()<<" , "<<c2.norm() <<" , "<<c3.norm();
	return 0;
}
