#include<iostream>
using namespace std;
class jaydip;
class nilesh
{
	
    int money=100;
	
	public:
	   friend int ravi(nilesh n);
	   	
	
};
class jaydip
{
	int money1=200;
	
	public:
		friend int ravi(jaydip j);
		
};
int ravi(nilesh n )
{

	cout<<n.money ;
}

int main()
{
	nilesh obj;
	ravi(obj);
}


