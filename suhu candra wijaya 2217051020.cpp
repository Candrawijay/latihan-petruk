#include <iostream>
using namespace std;
int main(){
	double c1,c2,r1,r2,f1,f2,k1,k2;
	cin>>c1;
	cin>>c2;
	r1=c1*0.8;
	r2=c2*0.8;
	f1=c1*1.8+32;
	f2=c2*1.8+32;
	k1=c1+273;
	k2=c2+273;
	cout<<endl;
	cout<<"Celcius "<<c1<<"\t"<<"Celcius "<<c2<<endl;
	cout<<"Reamur "<<r1<<"\t"<<"Reamur "<<r2<<endl;
	cout<<"fahrenheit "<<f1<<"\t"<<"fahrenheit "<<f2<<endl;
	cout<<"kelvin "<<k1<<"\t"<<"kelvin "<<k2<<endl;
}
