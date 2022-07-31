#include<iostream>
using namespace std;

class jay
{
	private:
		string name,address;
		int income,phone,age;
	
	public:
		int nil()
		{
			name="JADAV NILESHBHAI RAMJIBHAI";
			age=22;
			income=100000;
			phone=989868219;
			address="AT:GUNJAR TA:DHANDHUKA DIST: AHMEDABAD";
			
		}
	     
	    int display()
	    {
	    	cout<<"name is="<<name<<endl;
	    	cout<<"age is="<<age<<endl;
	    	cout<<"income is="<<income<<endl;
	    	cout<<"phone no is="<<phone<<endl;
	    	cout<<"address is="<<address<<endl<<endl;
		}
	
};

class ravi : public jay
{
	
};

int main()
{
     jay obj;
	 obj.nil(); 
     obj.display();
	 
	  ravi obj1;
	  obj1.nil();
	  obj1.display();
	
}
