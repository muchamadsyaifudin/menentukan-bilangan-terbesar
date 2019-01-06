#include <iostream>
using namespace std;
int main (){

	int a, b, c, d;
	cout<<"nilai 1 :";
	cin>>a;
	cout<<"nilai 2 :";
	cin>>b;
	cout<<"nilai 3 :";
	cin>>d;
	c = (a > b ? a : b);
	cout<<"nilai terbesar adalah :" << (c > d ? c : d) << "\n";
	
}

