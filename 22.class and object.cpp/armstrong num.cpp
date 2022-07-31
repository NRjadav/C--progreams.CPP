#include<iostream>
using namespace std;

class armstrongnum
{
	  public:
	  
	  int chknum()
	  {
	  	
	  	     int number,rem,result=0,n;
	  	
	  	       cout<<"enter any number: ";
	  	       cin>>number;
	  	       n=number;
	  	
	          	while(n>0)
	  	        {
				    rem=n%10;
				    result=result+rem*rem*rem;
				    n=n/10;
		         
				 
				}
	  	
	  	          cout<<number;
	  	        
	  	        if(number==result)
	  	        {
	  	        	cout<<"armstrong number...!";
	  	        	
				}
				else
				{
				   cout<<"not an armstrong number...!";
	  	        	 	
				}
	  }
	
	
	
	
	
};

int main()
{
	
	armstrongnum n;
	n.chknum();
	
	
	
	
}
