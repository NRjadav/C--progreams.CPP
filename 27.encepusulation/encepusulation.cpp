#include<iostream>
using namespace std;

class nilesh
{
	private:
		int age,income;
		string name,address;
		
	public:
	    int nil()
		{
		    age=100;
		    income=50000;
		    name="jadavnilesh";
		    address="gunjar";
				
		}	
	
	     int jay()
	     {
	     	cout<<age<<endl;
			cout<<income<<endl;
			cout<<name<<endl;
			cout<<address<<endl;

		 }	
	
};


int main()
{
	nilesh obj;
    obj.nil();
	obj.jay();
}

