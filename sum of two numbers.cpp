#include<stdio.h>
#include<iostream>

using namespace std;

class operation 
{
	public:
		int a,b;
		
		void sum()
		{
			std::cout<<"enter the two numbers :"<<endl;
			std::cin>>a>>b;
			int sum;
			sum=a+b;
			std::cout<<"the sum is : "<<sum<<endl ;		
		}
		
		void swap()
		{
		std::cout<<"before swaping: "<<a<<b<<endl;
		   int tmp;
		   tmp=a;
		   a=b;
		   b=tmp;
		   
		   std::cout<<"after swaping: "<<a<<b<<endl;
			
		}
		
};

int main()
{
	operation s;
	s.sum();
	s.swap();
	
}
