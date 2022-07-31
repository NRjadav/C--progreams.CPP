#include<iostream>
using namespace std;

class A
{
	public:
		int a=100;
};
class B :virtual  public A
{
	public:
		int b=1000;
		
};
class C :  virtual public B ,virtual  public A
{
	
};
int main()
{
     C obj;
    cout<<obj.a<<endl<<obj.b;
	return 0;
	
	
}
