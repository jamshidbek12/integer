#include <iostream>
using namespace std;

int main(){
	int a;
	cout<< "ikki xonali son kiriting : ";
	cin>>a;
	int s,d,l;
	s=a/10;
	d=a%10;
	l=s+d;
	cout<<s<<" ta onlik"<<endl;
	cout<<d<<" ta birlik"<<endl;
	cout<<"Yigindisi = "<<l;
}
