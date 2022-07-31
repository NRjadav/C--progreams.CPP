#include<iostream>
using namespace std;

int main()
{
	
	int n1,n2,n,sum,ch,max;
	
	cout<<"enter your choice:";
	cin>>ch;
	
	switch(ch)
	{
		
		case 1:
		       cout<<"enter n1";
		       cin>>n1;
		       cout<<"enter n2";
		       cin>>n2;
		       
		       sum=n1+n2;
		       cout<<"sum is="<<sum;
		       
		       break;
		
	    case 2:
		
		       cout<<"enter n1";
		       cin>>n1;
		       cout<<"enter n2";
		       cin>>n2;
		       	
		       max=(n1>n2)?n1:n2;
		       cout<<"max number="<<max;
		
	
		case 3:
		
		       cout<<"enter eny numbers:";
		       cin>>n;
		       
		       if(n%2==0)
		       {
		       	cout<<"number is evan...!";
			   }
		       else
		       {
		       	cout<<"number is odd...!";
			   }
		
	}
	
	
	
	
	
	
	
}
