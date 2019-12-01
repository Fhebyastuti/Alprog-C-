#include <iostream>
#include<math.h>
using namespace std;
float volume_kubus (int sisi){
	int kubus=pow(sisi,3);
	return kubus;
}
float volume_balok (int p,int l,int t){
	int balok=p*l*t;
	return balok;
}
float volume_kerucut (int r,int tinggi,float phi){
	float kerucut=0.3*pow(r,2)*phi*tinggi;
	return kerucut;
}
int main(){
	int sisi,kubus;
	cout<<"menghitung volume kubus"<<endl;
	cout<<"masukan panjang sisi : ";
	cin>>sisi;
	kubus=volume_kubus(sisi);
	cout<<" volume kubus adalah "<<kubus<<endl;
	
	int p,l,t,balok;
	cout<<" menghitung volume balok "<<endl;
	cout<<" masukan panjang : ";
	cin>>p;
	cout<<" masukan lebar : ";
	cin>>l;
	cout<<" masukan tinggi : ";
	cin>>t;
	balok=volume_balok(p,l,t);
	cout<<" volume balok adalah "<<balok<<endl;
	
	int r,tnggi;
	float phi,kerucut;
	cout<<" meghitung volume kerucut "<<endl;
	cout<<" masukan jarijari : ";
	cin>>r;
	cout<<" masukan tinggi : ";
	cin>>t;
	phi=3.14;
	kerucut=volume_kerucut(r,t,phi);
	cout<<" volume kerucut adalah "<<kerucut<<endl;
}
