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
			
			N operator +(N obj)
			{
			   obj.value=value+obj.value;
			}
			
			int display()
	        {
	        	cout<<value<<endl;
			}
	
};

int main()
{
	
	N obj1,obj2,obj3,obj4,obj5,obj6,totlesum;
	obj1.getvalue(10);
	obj2.getvalue(20);
	
	obj4.getvalue(30);
	obj5.getvalue(40);
	
    obj3=obj1+obj2;
    obj6=obj4+obj5;
    
    totlesum=obj3+obj6;

    obj3.display();	
	obj6.display();
	totlesum.display();
	
	
	return 0;
	
}
