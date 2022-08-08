#include<iostream>
using namespace std;

class nilesh
{
    private:
		int a=10,b=20,temp;
	public:
		
	    friend int jaydip(nilesh N1);	
};
int  jaydip(nilesh N1)
{


   N1.temp=N1.a;
   N1.a=N1.b;
   N1.b=N1.temp;
   
   cout<<N1.a<<endl<<N1.b;
}


int main()
{
	 nilesh obj;
	 jaydip(obj);
}
