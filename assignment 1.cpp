#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
int main()
{
	char str[19]="Programming";
	cin>>str;
	stack<char> s;
	for(int i=0;i<strlen(str);i++)
	    s.push(str[i]);
	for(int i=0;i<strlen(str)-1;i++){
	    cout<<s.top();
}
    return 0;
}

