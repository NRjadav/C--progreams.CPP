#include<iostream>
using namespace std;

class A
{
	public:
		int gatA()
		{
			cout<<"class A"<<endl;
			
		}
};
class B : public A
{
	public:
		int gatA()
		{
			cout<<"class B"<<endl;
		}
	
};
class C :  public B
{
    public:	
       int gatA()
		{
			cout<<"class C"<<endl;
		}
	
};


int main()
{
//	B obj;
//	obj.gatA();
//	obj.A::gatA();
   
    C obj;
    obj.gatA();
    obj.A::gatA();
    obj.B::gatA();
	return 0;
}

