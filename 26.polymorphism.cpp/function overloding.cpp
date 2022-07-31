#include<iostream>
using namespace std;

class A
{
	public :
		
		string name;
	
	      int getname(string N)
         {
               name=N;
              cout<<"name is ="<<N<<endl;
		 
		 }
		 
		 int getname(string N,int A)
         {
              name=N;
              cout<<"name is ="<<name<<endl<<A<<endl;
		 
		 }
		 int getname(int A)
         {
              
              cout<<A;
		 
		 }
		 
		 
};

int main()
{
	A obj;
	obj.getname("nilesh");
	obj.getname("nilesh",20);
	obj.getname(10202020);
	
	
	
	
	
	
	
	return 0;
	
	
	
}
