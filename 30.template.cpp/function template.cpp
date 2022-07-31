#include<iostream>
using namespace std;

template<typename N>

N nil(N x,N y)
{
	cout<<x+y<<endl;
	
}
int main()
{
	nil(10,20);
	nil(1.5,2.5);
	nil('n','N');
//	nil("nilesh","jadav");
	return 0;
}
