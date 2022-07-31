#include<iostream>
using namespace std;

class nilesh
{
	string TV="ipl";
	
	public:
	   friend int nil(nilesh n);
	   friend int jay(nilesh n2);
	
};
int nil(nilesh n)
{
	cout<<n.TV;
}
int jay(nilesh n2)
{
	cout<<n2.TV;
}




int main()
{
	nilesh obj;
	nil(obj);
	jay(obj);
	return 0;
}
