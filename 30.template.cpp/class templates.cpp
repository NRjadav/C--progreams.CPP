#include<iostream>
using namespace std;

template<class M>

class nil
{
	M height,width;
	
	public:
		M getarea(M h,M w)
		{
			height=h;
			width=w;
		
		}
	    M display()
	    {
	    	cout<<height+width<<endl;
		}
	
};
int main()
{
	nil<int>obj;
	nil<float>obj1;
	nil<char>obj2;
	nil<string>obj3;
	obj.getarea(10,20);
	obj.display();
	obj1.getarea(1.2,1.2);
    obj1.display();
    obj2.getarea('N','n');
    obj2.display();
    obj3.getarea("nil ","jadav");
    obj3.display();
	return 0;
}
