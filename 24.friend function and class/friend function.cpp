#include<iostream>
using namespace std;

class nilesh
{
     private:
	      string TV="wathing..!";
	      string tv="ipl..!";
		  
	 public:	  
		  
		friend int jaydip(nilesh N1);
	    friend int jaydeep(nilesh N2);	  
		  	
};
int jaydip(nilesh N1)
{
	cout<<N1.TV<<endl<<N1.tv<<endl;
}
int jaydeep(nilesh N2)
{
	cout<<N2.TV<<endl<<N2.tv;
}
int main()
{
	nilesh obj;
	jaydip(obj);
	jaydeep(obj);
	
}
