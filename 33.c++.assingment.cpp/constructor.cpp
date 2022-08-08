#include<iostream>
using namespace std;

class simple
{
	public:
		float si;
		
		simple(int p,int y,float r)
		{
			si=(p*y*r)/100;
			cout<<si;
		}
};

int main()
{
	simple obj(10000,1,2.5);
}
