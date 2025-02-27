#include<iostream>
using namespace std;

class livingthings
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

class human : public livingthings
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
}
