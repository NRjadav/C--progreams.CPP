#include<iostream>
using namespace std;

class fectornum
{
	public:
            int number;
            
	       fectornum(int v)
		    {
			
		       int i;
			   number=v;
			   cout<<number<<"factors of entered number are:\n";
			   
			   for(i=1;i<=number/2;i++)
			   {
			   	     if(number%i==0)
			   	     {
			   	         cout<<i<<endl;  	
					 }
		   	   }   	
		   	
		   	
		   }	
	
	
	
};

int main()
{
	int n;
	cout<<"enter any number:";
	cin>>n;
	fectornum obj(n);
	
	
	
	
	
	
}

