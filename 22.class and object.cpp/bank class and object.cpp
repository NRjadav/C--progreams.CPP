#include<iostream>
using namespace std;

class bank
{
	    
	       int atmpin,balance;

	       public:
	                  	
	           int fun(int pin)
	           {
			         atmpin=pin;
	                 cout<<atmpin<<endl;
	
			   }
	           
	           int fun1(int bal)
			   {
			   	     balance=bal;
			   	     cout<<balance<<endl;
    		   }      
	
	
};

int main()
{
	bank B;
	B.fun(1234567898);
	B.fun1(2000);
	
	
	
}
