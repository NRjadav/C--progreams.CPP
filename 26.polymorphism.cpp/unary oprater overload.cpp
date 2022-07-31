#include<iostream>
using namespace std;

class nilesh
{
	public:
		
		int A,B;
		int gat(int n)
		{
			A=n;
		//	B=n;
			
		}
	    
	    nilesh operator ++()
		{ 
		   A=A+1;
		   B=A-1;
	
		   
		} 
	   
	     int display()
	     {
	     	cout<<A<<endl<<B;
		 }
	
};
int main()
{
     nilesh obj;
	 obj.gat(20);
	 ++obj;
	 obj.display();	
}
