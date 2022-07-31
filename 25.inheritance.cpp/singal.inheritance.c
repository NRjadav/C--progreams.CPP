#include<iostream>
using namespace std;

class A
{
	protected:
		
		int a=100;
	
};

class B:public A
{
	public:
		int nil()
		{
			cout<<"A is="<<a;
		}
		
};
int main()
{
   B obj;
   obj.nil();
   
}


