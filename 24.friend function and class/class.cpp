#include<iostream>
using namespace std;
class jaydip;
class durgesh;
class nilesh
{
	
    int money=100;
	
	public:
	   friend int ravi(nilesh n,jaydip j,durgesh d);
	   	
	
};
class jaydip
{
	int money1=200;
	
	public:
		friend int ravi(nilesh n,jaydip j,durgesh d);
		
};
class durgesh
{
	int money2=300;
	
	public:
		friend int ravi(nilesh n,jaydip j,durgesh d);
		
};

int ravi(nilesh n , jaydip j , durgesh d)
{

	cout<<n.money + j.money1 + d.money2;
}

int main()
{
	nilesh obj;
	jaydip obj1;
	durgesh obj2;
	
	ravi(obj,obj1,obj2);
}


