#include<iostream>
using namespace std;

//class livingthings
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
//class aquatic livingthigs inherited from livingthings
class aquatic_livingthings : public livingthings
{
	public:
		void swim()
		{
			cout << " yes we swim"<<endl;
		}
		
};

class terrestial_livingthings  
{
	public:
		void land()
		{
			cout << " yes we live on land"<<endl;
		}
		
};

class animal:public livingthings , public terrestial_livingthings
{
	public:
		void walk()
		{
			cout<<"we can walk"<<endl;
		}
	
	};

//class fish inherited from aquartic livingthings
class fish : public aquatic_livingthings
{
	public:
		void grills ()
		{
			cout << " yes we breath using grills"<<endl;
		}
	
};

//class catfish inherited from fish

class catfish : public fish 
{
	public:
		
	    void size()
	    {
	    	cout << " i am small in size"<<endl;
	    	
		}
	
};

//dervied class 
/*class human : public terrestial_livingthings , public aquatic_livingthings
{
	public :
		
		void speak()
		{
			cout << " yes we can speak"<<endl;
		}
};
*/

int main()
{
	catfish c1;
	c1.size();
	c1.swim();
	animal a1;
	a1.walk();
	
}
