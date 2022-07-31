#include<iostream>
using namespace std;

class bank
{
     public:
        int fun()
		{
			cout<<"helllo nilesh"<<endl;
	    }
	    
	    int nilu()
	    {
	    	cout<<"hello jaydip";
		}
	    
	    int sun(int n)
	    {
	    	cout<<n;
		}
	    
};

int main()
{
	
	bank nm;
	nm.fun(); 
	nm.nilu();
	nm.sun(300);
}

