#include <iostream>
using namespace std;

int main(){
	float n;
	cout<<"Sekund kiriting : ";
	cin>>n;
	float s,k;
	k = n / 60;
	s = n / 60 / 60;
	cout<<"Soatda  = "<<s<<endl;
	cout<<"Minutda = "<<k<<endl;
	cout<<"Sekundda = "<<n;
}
