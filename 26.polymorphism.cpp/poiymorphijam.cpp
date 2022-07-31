#include<iostream>
using namespace std;

class A
{
	int num1,num2,n,m;
	
	public:
	    int person()
		{
		  cout<<"enter two numbers:";
		  cin>>num1>>num2;
		  n=num1+num2;
		  cout<<"Addition ="<<n<<endl;
			
		}
		
		int person(int a,int b)
		{
		   	m=a*b;
		   	cout<<"multipacation ="<<m;
		}	
	
};

int main()
{
	A obj;
	obj.person();
	obj.person(10,20);
	
}
