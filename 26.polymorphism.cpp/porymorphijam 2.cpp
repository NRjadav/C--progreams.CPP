#include<iostream>
using namespace std;

class A
{    
     public:
     	int person()
     	{
     	    cout<<"good moening";	
		}
	
};

class B : public A
{
	public:
		int person()
		{
			cout<<"good ningh";
		}
};

int main()
{
	B obj;
	obj.person();
	obj.A::person();
	
	
}

