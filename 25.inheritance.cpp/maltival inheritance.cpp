#include<iostream>
using namespace std;

class A
{
	 protected:
	 	 int a=100;
	 	 
	 public:
	     int getA()
		 {
	          cout<<"A is="<<a<<endl;	 	
	     }	 
	 
};
class B:public A
{
	protected:
		int b=1010;
		
   public:		
	    int getb()
	    {
	    	cout<<a<<"B is="<<b<<endl;
		}
	
};
class C:public B

{
	protected:
		int c=4994858;
	public:
		int getc()
		{
			cout<<a<<endl<<b<<endl<<c;
		}
};

int main()
{

	B obj;
	obj.getb();
}
