#include<iostream>

namespace A
{
	int a;
	   
	     int nil()
	     {
	     	a=10;
	     	std::cout<<a<<"\n";
		 }
}

namespace B
{
	int a;
	    
	     int nil()
	     {
	     	a=20;
	     	std::cout<<a<<"\n";
		 }
	    
}    

int main()
{
	A::nil();
	B::nil();
}
