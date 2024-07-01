#include <iostream>
using namespace std;

int main(){
	int a;
	cout<< "Uch xonali son kiriting : ";
	cin>>a;
	int s,d,l;
	s = a;
	l=a/100;
	d= (a / 10)%10;
	s = a % 10;
	
	cout<<s<<" ta birlik"<<endl;
	cout<<d<<" ta onlik"<<endl;
	cout<<l<<" ta yuzlik"<<endl;
	
}
