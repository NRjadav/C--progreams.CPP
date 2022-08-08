#include<iostream>
using namespace std;

class person
{
	protected:
		
		int age=22;
        char name[10]="nilesh";
};

class student
{
    protected:
    	float persontag=81.99;
	
};

class teachar : public person,public student
{
	protected:
		int salary=10000;
		
	public:
	    int nil()
		{
			cout<<name<<endl<<age<<endl<<persontag<<endl<<salary<<endl;
	    } 	
	
};

int main()
{
	teachar obj;
	
	obj.nil();

}


