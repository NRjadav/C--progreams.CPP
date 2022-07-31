#include<iostream>
using namespace std;

class A
{
	  public:
	  	
	  	   int a;
	  	    
	  	   A(int x)
			 {
			 	a=x;
			 	cout<<a<<endl;
			 } 
	
	        A(A &R1)
	        {
	        	cout<<R1.a<<endl;
			}
	
	      
};

int main()
{
	    A obj(200);
	    A obj1(800);
	    A obj2(300);
	   
}

