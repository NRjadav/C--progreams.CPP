#include<iostream>
using namespace std;

class N
{
    public:
	    int value;
		
		int getvalue(int v)
		{
			value=v;
		}
		N operator ++()
		{
			value++;
			value++;
		}
			
	    int display()
	    {
	    	cout<<value<<endl;
		}
	
};

int main()
{
	N obj;
	obj.getvalue(10);
	++obj;
	obj.display();
	
	
}
