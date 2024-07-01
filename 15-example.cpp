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
	
	q = b * 100 + a * 10 + c;
	
	cout<<q;
}
