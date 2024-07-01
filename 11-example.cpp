#include <iostream>
using namespace std;

int main(){
	int a;
	cout<< "Uch xonali son kiriting : ";
	cin>>a;
	int s,d,l,q;
	s = a;
	l=a/100;
	d= (a / 10)%10;
	s = a % 10;
	
	q = l + d + s;
	
	cout<<"Summasi = "<<q;
	
}
