#include<iostream>
using namespace std;

class fathar
{
	public:
		int money()
		{ 
			int a=100;
			cout<<"fathar money ="<<a<<endl;
		}
		
		
};

class nilesh : public fathar
{ 
    public:
	    int money1()
		{
			int b=200;
			cout<<"fathar son nilesh money="<<b<<endl;
		}  

	
};

class jaydeep : public fathar
{
     public:
	    int money2()
	    {
	    	int c=300;
	    	cout<<"fathar son jaydeep money="<<c;
		}
	 	
};
class son : public nilesh
{
	public:
		int car()
		{
			
			cout<<"nilesh son car"<<endl;
		}
		
};

int main()
{
//	 nilesh N;
//	 jaydeep J;
	 son M;
//	 N.money();
//	 N.money1();
//	 J.money();
//	 J.money2();
     M.money();
     M.money1();
	 M.car();
	
	
}
