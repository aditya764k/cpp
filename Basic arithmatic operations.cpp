#include<iostream>
using namespace std;
int main()
{
	int a,s,m,mod;
	float p,q,d;
	cout<<"Enter two no.s";
	cin>>p>>q;
	a=p+q;
	s=p-q;
	m=p*q;
	d=float(p/q);
	mod= (int)p%(int)q;
	cout<<"\n"<<a<<"\n"<<s<<"\n"<<m<<"\n"<<d<<"\n"<<mod;
}
