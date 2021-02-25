#include<iostream>
using namespace std;
class triangle{
	const int *_base,*_height;
	public:
		triangle(int b,int h):_base(new int (b)),_height(new int(h)){}
		~triangle() {
			delete _base,_height;
		}
		double area();
};
double triangle ::area(){
	return 0.5 * *_base * *_height;
}
int main()
{
	int a,b;
	cin>>a>>b;
	triangle r(a,b);
	cout<<r.area();
	return 0;
}
