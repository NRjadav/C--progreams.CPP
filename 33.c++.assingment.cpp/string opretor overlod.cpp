#include<iostream>
using namespace std;

class N
{
	public:
		string n;
		
		int in(string i)
		{
			
			n=i;
		}
		
		N operator +(N xyz)
		{
		    xyz.n=n+xyz.n;
			
		}
		
		int display()
		{
			cout<<n;
		}
	
	
};

int main()
{ 

	N obj1,obj2,obj3;
    obj1.in("nil");
    obj2.in("jay");
    obj3=obj1+obj2;
	obj3.display();
}
