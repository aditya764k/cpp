#include<iostream>
#include<string>
#include<iomanip>

using namespace std ;

int main()
{
	int price[10];
	string name[10];
	int sum=0;
	
	for(int i=0;i<5;i++)
	{
		cout<<"enter the item name: ";
		cin>>name[i];
		cout<<"enter the item price: ";
		cin>>price[i];
		
		sum+=price[i];
	}
	
	cout<<endl<<"*******************"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<name[i]<<"\t"<<setw(5)<<price[i]<<setfill('0')<<endl;
	}
	
	cout <<endl<<"********************"<<endl;
	cout<< "total : "<< sum << endl;
	
	cout << endl<<"********************"<<endl;
	
	
	
}
