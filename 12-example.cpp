#include <iostream>
using namespace std;

int main(){
	int p;
	cout<< "Uch xonali son kiriting : ";
	cin>>p;
	int a,b,c,q;
	a = p;
	a=a/100;
	b= (p / 10)%10;
	c = p % 10;
	
	q = c * 100 + b * 10 + a; 
	
	cout<<q;
}
