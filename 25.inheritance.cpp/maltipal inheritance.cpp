#include<iostream>
using namespace std;

class A
{
	protected:
		int a=10;
		string getsurname="jadav";
};
class B
{
	protected:
		int b=20;
		string getname="nilesh";
};
class C:public A,public B
{
	public:
		
		int nilu()
		{
			cout<<"A is="<<a<<endl<<"B is="<<b<<endl<<"surname is="<<getsurname<<endl<<"name is="<<getname<<endl;
		
		}
};
class D:public A,public B
{
    	public:
    		
    		int nilesh()
    		{
    			cout<<"A is="<<a<<endl<<"B is="<<b<<endl<<"surname is="<<getsurname<<endl<<"name is="<<getname;
    			
			}
    		
};
int main()
{
	C obj;
	obj.nilu();
    
	D obj2;
	obj2.nilesh();	
}
