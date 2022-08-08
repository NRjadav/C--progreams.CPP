#include<iostream>
using namespace std;

template<typename N>

class nil
{
	private:
		N a=10,b=20,temp;
	public:
	    N swap()
		{
		   temp=a;
		   a=b;
		   b=temp;	
		   cout<<a<<endl<<b<<endl;
		}	
		
};

int main()
{
   nil <int>obj;
   obj.swap();	
	
	
}
