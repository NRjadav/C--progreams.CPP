#include<iostream>
using namespace std;

template<typename jay>

jay nil(jay N)
{
	cout<<N<<endl;
	
}
int main()
{
	nil(45);
	nil(4.5);
	nil('n');
	nil("nilesh");
	return 0;
}
