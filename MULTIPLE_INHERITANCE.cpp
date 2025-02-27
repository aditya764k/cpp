#include<iostream>
using namespace std;

// base class 1
class terrestial_livingthings
{
	public:
		void eat()
		{
			cout << " yes we eat"<<endl;
		}
		
	private:
		void move()
		{
			cout << " yes we move"<<endl;
		}
		
	protected:
		void die()
		{
			cout << " yes we die"<<endl;
		}
	public:
		void get_die()
		{
			die();
		}
	
	public:
		void get_move()
		{
			move();
		}
};
//base class 2
class aquatic_livingthings
{
	public:
		void swim()
		{
			cout << " yes we swim"<<endl;
		}
		
};
//dervied class 
class human : public terrestial_livingthings , public aquatic_livingthings
{
	public :
		
		void speak()
		{
			cout << " yes we can speak"<<endl;
		}
};

int main()
{
	human h1;
	h1.eat();
	h1.get_die();
	h1.get_move();
	h1.swim();
	
}
