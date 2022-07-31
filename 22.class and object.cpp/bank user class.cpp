#include<iostream>
using namespace std;

class bank
{
	  public:
	       
	         int atmpim;
	         int balance;
	         char name[100];
	         char IFSC[20];
	         
	
	
};


int main()
{
	
	bank N;
	cout<<"enter atmpin,balance,name,IFSC"<<endl;
	cin>>N.atmpim>>N.balance>>N.name>>N.IFSC;
	cout<<"atmpin="<<N.atmpim<<endl<<"balance="<<N.balance<<endl<<"name="<<N.name<<endl<<"IFSC="<<N.IFSC;
	
	
	
	
}

