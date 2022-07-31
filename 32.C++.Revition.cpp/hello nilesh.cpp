//                                                             ******introduction******
/*#include<iostream>
using namespace std;

int main()
{
	cout<<"NAME:JADAV NILESHBHSI RAMJIBHAI\n";
	cout<<"DOB:30/01/2000\n";
	cout<<"COURSE:C++\n";
}

#include<iostream>
using namespace std;

int main()
{
	
	int a=10;
	float pi=10.0;
	char n='n';
	
	cout<<a<<endl;
	cout<<pi<<endl;
	cout<<n;
}*/
//                                                                *******input output******
/*#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout<<"enter any number:";
	cin>>n;
	cout<<"your enter number:"<<n;
	
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int n1,n2,sum;
	cout<<"enter two numbers:";
	cin>>n1>>n2;
	
	sum=n1+n2;
	cout<<"sum is="<<sum;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int a=1000,b=500;
	
	printf("%d",(a>b)?a:b);
}*/

//                                                                    ******if else*******

/*#include<iostream>
using namespace std;
int main()
{
	int age;
	
	cout<<"enter age:";
	cin>>age;
	
	if(age>=18)
	{
		cout<<"adult";
	}
	else if(age>=10 && age<18)
	{
	     cout<<"teeneger";	
	}
	else if(age>=5 && age<10)
	{
	     cout<<"child";	
	}    
	else
	{
		cout<<"not adult";
	}
	
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"enter any number:";
	cin>>number;

    if(number%2==0)
    {
		cout<<"evan number..!";
	}
	else
	{
		cout<<"odd number..!";
	}
	
}*/
//                                                   ********switch*********

/*#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter eny number:";
	cin>>num;
	
	switch(num)
	{
		case 1:
			   cout<<"nilesh";
			   break;
	
	    case 2:
	    	  cout<<"jaydip";
	    	  break;
	    	  
	    case 3:	  
	          cout<<"urvashi";
	          break;
	          
	    case 4:
	          cout<<"mital";
	          break;
	          
	    default:
		       cout<<"invalid number";        

    }
}*/

/*#include<iostream>
using namespace std;  
int main()
{
	  int num;
      cout<<"enter eny number:";
	  cin>>num;
	  
	  switch(num)
	  {
	  	
	          case 1:
			         cout<<"sunday";
					 break;
					 
		      case 2:
			         cout<<"monday";
					 break;
					 			 	
	          case 3:
	                 cout<<"tuesday";
	                 break;
	                 
	          case 4:
	          	     cout<<"wendnesday";
	          	     break;
	          	     
	          case 5: 
	                 cout<<"thursday";
	                 break;
	                 
	          case 6:
	                 cout<<"friday";
	                 break;
	                 
	          case 7:
	                 cout<<"saturday";
	                 break;
	  
	           default :
			          cout<<"invalid day"; 
	  }	  
    	
}*/
  
//                                                                         *******loops*******  
/*#include<iostream> 
using namespace std;
int main() 
{
      int i;
      
      for(i=1;i<=100;i++)
      {
      	if(i==91)
		{
		   break;
      	}
      	cout<<i<<endl;
	  }
  	
}
  
#include<iostream>  
using namespace std;
int main()
{
	int i;
	i=1;
	while(i<=100)
	{
		cout<<i<<endl;
		i++;
	}
	
}*/

/*#include<iostream>
using namespace std;
int main()
{
     int row,col;
     
     for(row=1;row<=10;row++)//1
     {
     	
     	for(col=1;col<=10;col++)//1
     	{
     	    	
     		cout<<" * ";
     		
		}
     	
     	cout<<endl;
     	
	 }
}*/

//                                                    ********1 to 10 maltipaction tables**********


/*#include<iostream>
using namespace std;

int main()
{
	int i,j;
	
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			
		      cout<<i<<"*"<<j<<"="<<i*j<<endl;
			
		}
		
		cout<<endl;
		
	}
	
}*/

//                                                           ***********function**************

/*#include<iostream>
using namespace std;
int nilesh()
{
	cout<<"hello nilesh";
	cout<<" good morning"<<"\n";
}
int jaydip()
{
	cout<<"hello jaydip";
	cout<<" good morning";
}
int main()
{
	nilesh();
	jaydip();
}*/

/*#include<iostream>
using namespace std;
int nil(int n)
{
	cout<<"numberr is="<<n;
}
int main()
{
	int m;
    cout<<"enter any number:";
	cin>>m; 
    
	nil(m);
}*/

//                                                                     ***********arrey**********

/*#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,32,3,4,4,5,5,6,6,67,7,7};
	
	int size;
	
	size=sizeof(arr)/sizeof(arr[0]);
	cout<<size;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int a[10],i;
	for(i=0;i<=5;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<=5;i++)
	{
		cout<<a[i];
	}
	
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int n1[10],n2[10],sum,i;
	
	for(i=0;i<5;i++)
	{
		cin>>n1[i];
	}
	
	for(i=0;i<5;i++)
	{
		cin>>n2[i];
	}
	
	for(i=0;i<5;i++)
	{
		sum=n1[i]+n2[i];
        cout<<"sum is="<<sum<<"\n";	
	}
	
}*/

//                                                              ********string*******

/*#include<iostream>
using namespace std;
int main()
{
	char n[]="nilesh  ";
	char m[]="mital ";
	cout<<n<<m;
}*/

/*#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char i[20];
    
    cout<<"enter eny string:";
    cin>>i;
	cout<<"string name is:"<<i<<endl;
	
	cout<<strlen(i)<<"\n";
	cout<<strrev(i)<<endl;
	cout<<strupr(i)<<endl;
}*/

/*#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char n[10]="jadav",m[10];
	strcpy(m,n);
	cout<<"m is="<<n;
	
}*/

/*#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char n[50]="jadav",m[50]=" nilesh";
	strcat(n,m);
	cout<<n;
}*/

/*#include<iostream>
#include<string.h>
using namespace std;
int main()
{   
	char n[20]="jadav",m[20]="jadav ";
	strcmp(n,m);
	
	if(strcmp(n,m)==0)
	{
		cout<<"equle..!";
	}
	else
	{
		cout<<"not equle..!";
	}
}*/

//                                                                         *********mecros************

/*#include<iostream>
using namespace std;
#define money 100
int main()
{
	
	cout<<money-50<<endl;
	cout<<money+1000<<endl;
	cout<<money/10<<endl;
	cout<<money%50<<endl;
	
}*/

//                                                            *************union**** *****structure*************

/*#include<iostream>
using namespace std;
union nilesh
{
	int age;
    char name[10]; 
	
	
	
};

int main()
{
	union nilesh xyz;
	cin>>xyz.age;
	cout<<xyz.age;
	cin>>xyz.name;
	cout<<xyz.name;
	
}*/

/*#include<iostream>
using namespace std;
struct nil
{
   int age;
   char name[20];
   float pi;
   	
	
};

int main()
{
	struct  nil m;
	cin>>m.age>>m.name>>m.pi;
	cout<<m.age<<endl<<m.name<<endl<<m.pi;
}*/

//                                                                          ************pointer***********

/*#include<iostream>
using namespace std;

int main()
{
	int a=100,*p,**n;
	p=&a;
	n=&p;
	
	cout<<*p<<"\n";
	cout<<**n;
}*/
//                                                       **********factors of numbers*********
/*#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"enter eny number:";
	cin>>n;
	
	for(i=1;i<=n;i++)//1<10 2<10 3<10 4<10 5<10
	{
		if(n%i==0)//1%10=0  2%10=0  3%10=1  4%10=2  5%10=0
		{
			cout<<i<<endl;//1  2  5  10
		}
	}
	
}*/

//                                                            *******class and object**********  
/*#include<iostream>
using namespace std;

class person
{
	public:
	
	int age;
	
	
};

int main()
{
	person p1;
	cout<<"enter your age :";
	cin>>p1.age;
	cout<<"age is="<<p1.age<<endl;
	
}*/

/*#include<iostream>
using namespace std;

class bank
{
	public:
     		
	     int fun(int n)
	     {
	     	cout<<"N is="<<n;
	     	
		 }
}; 

int main()
{
      int m;
      cout<<"enter eny velue:";
      cin>>m;
      bank obj;
      obj.fun(m);
}*/

/*#include<iostream>
using namespace std;
class A
{ 
      int name;
      
      public:

           int fun(int x)
           {
           	name=x;
           	cout<<"name velue="<<name;
           	
		   }
		   
};
int main()
{
	A obj;
	obj.fun(10);
}*/

//                                                                  *********constructor*************

/*#include<iostream>
using namespace std;

class animal
{
    
	public:
		
		string cow,dog;
		
		animal()
		{
			cout<<"cow walking"<<endl;
			cout<<"dog runing";
		}
		
};
int main()
{
	animal obj;
	
}*/

/*#include<iostream>  
using namespace std;
class test  
{
    public:
	       int age;
	test(int n)
		{  
		    age=n;
			cout<<"age is="<<age<<endl;	
		}
		
	test()	
	{
		cout<<"nilesh\n";
	}
	
	
};  
int main()  
{
   test t(10),t1;
   test t2(344);
   test t3(40);

} */ 
  
/*#include<iostream>  
using namespace std;  
         
class A
{
    public:
          
          int a;
		  
		  A(int n)
		  {
	          a=n;
			  cout<<a<<endl;
		  }
		  A(A &N)
		  {
		  	cout<<N.a<<endl;
		  }
		  
		       
};         
         
int main()         
{
	A obj(10);
	A obj1(obj);
}*/

//                                                                    ******encepulation******

/*#include<iostream>
using namespace std;

class N
{
     private:
	     string name, address;
		 int age,income,phone_no; 
     
     public:
     	 
     	  int j()
     	  {
             name="JADAV JAYDIPBHAI RAMJIBHAI";
			 age=21;
			 income=10000;
			 phone_no=748684331;
			 address="AT:GUNJAR TA:DHANDHUKA DIST:AHMEDABAD";     	  	
		  }
		  
		  int d()
		  {
		  	cout<<"name is= "<<name<<endl;
		  	cout<<"age is= "<<age<<endl;
		  	cout<<"income is= "<<income<<endl;
		  	cout<<"phone no is= "<<phone_no<<endl;
		  	cout<<"address is= "<<address<<endl;
		  	
		  }
		  
	
};

int main()
{
	N obj;
	obj.j();
	obj.d();
}*/
        
//                                                                ******************* inhetitance***************

                             // single inheritance:

/*#include<iostream>
using namespace std;

class A
{
	protected:
		int a=100;
		
	public:
	    int nil()
		{
		    cout<<"A is ="<<a<<endl;	
		}	
};
class B : public A
{ 
    protected:
	    int b=200;
	
	public:
	    int jay()
	    {
	    	cout<<"B is ="<<b;
		}
};

int main()
{
    B obj;
	obj.nil();
	obj.jay();	
}*/

                           // maltipal inheritance

/*#include<iostream>
#include<string.h>
using namespace std;

class A
{
	protected:
		int a=100;
		string n="nilesh";
	public:
	    int nil()
		{
		    cout<<"A price is ="<<a<<endl<<"name is="<<n<<endl;	
		}	
};
class B
{
	protected:
		int b=200;
	public:	
	    int jay()
	    {
	    	cout<<"B price is ="<<b<<endl;
		}
};
class C
{
	protected:
		int c=300;
	public:
	    int ravi()
		{
		    cout<<"c price is ="<<c<<endl;	
		}	
};
class D : public A , public B , public C
{   
    protected:
    	int d=400;
    public:
	    int mit()
	    {
	        cout<<"D price is ="<<d<<endl;	
		
	    }	
	
};

int main()
{
	D obj;
	obj.nil();
	obj.jay();
	obj.ravi();
	obj.mit();
}*/

                                         // maltileval inheritance

/*#include<iostream> 
using namespace std;

class A
{
	protected:
		int a=10000;
	public:
	    int nil()
		{
		    cout<<"A price is ="<<a<<endl;	
		}	
};
class B : public A
{
	protected:
		int b=20000;
	public:
	    int nil1()
		{
		    cout<<"B price is ="<<b<<endl;	
		}	
	
};
class C : public B
{
	protected:
		int c=30000;
	public:
	    int nil2()
		{
		    cout<<"C price is ="<<c<<endl;	
		}	
};

int main()
{
     C obj;
     obj.nil();
     obj.nil1();
     obj.nil2();
    
}*/

                                    // hierarchical inheritance

/*#include<iostream>
using namespace std;
class A
{   
    protected:
    	int a=100;
    public:
	    int nil()
		{
		     cout<<"A price is ="<<a<<endl;	
		}	
	
};
class B : public A
{
	protected:
		int b=200;
	public:
	    int nil1()
		{
		   cout<<"B price is="<<b<<endl;	
		}	
	
};
class C : public A
{
	protected:
		int c=300;
	public:	
		int nil2()
		{
			cout<<"C price is ="<<c<<endl;
		}

};
class D : public B
{
	protected:
		int d=1000;
	public:
	    int nil3()
		{
			cout<<"D price is ="<<d<<endl;
		}	
	
	
};
class E : public B
{
	protected:
		int e=1000;
	public:
	    int nil4()
		{
			cout<<"E price is ="<<e<<endl;
		}	
	
};
 
int main()
{
//   B obj;
//   C obj1;
//   obj.nil();
//   obj.nil1();
//   obj1.nil();
//   obj1.nil2();
//     D obj;
//     obj.nil();
//     obj.nil1();
//     obj.nil3();
     E obj;
     obj.nil();
     obj.nil1();
     obj.nil4();
   
   	
}*/

//                                                                                 ************virtual keywords***********

/*#include<iostream>
using namespace std;

class A
{
	protected:
		int a=100;
	public:
	    int nil()
		{
		    cout<<a;	
		}	
};
class B : virtual public A
{
	protected:
		int b=200;
	public:
	    int jay()
		{
		   cout<<b;
		  	
		}	
	
};
class C : virtual public B , virtual public A
{
	protected:
		int c=400;
	public:
	    int mit()
		{
		    cout<<c;	
		}	
		
};

int main()
{
	C obj;
	obj.nil();
	obj.jay();
	obj.mit();
	
}*/

//                                                            ******************friend function*****************

/*#include<iostream>
using namespace std;

class nilesh
{ 
    private:
    	string TV="wathing ipl...! ";
    	string star="PULI";
	public:
		
		friend  int jaydip(nilesh N1);
		friend  int ravi(nilesh N2);
		friend  int shivam(nilesh N3);
		
};
int jaydip(nilesh N1)
{
	cout<<N1.TV<<ends<<N1.star<<endl;
}
int ravi(nilesh N2)
{
	cout<<N2.TV<<ends<<N2.star<<endl;
}
int shivam(nilesh N3)
{
	cout<<N3.TV<<ends<<N3.star<<endl;
}

int main()
{
	nilesh obj;
	jaydip(obj);
	ravi(obj);
    shivam(obj);
}*/

/*#include<iostream>
using namespace std;

class nilesh
{
	private:
		int a=100;
		string tv="ipl macth..!";
		
    public:
	    friend int jay(nilesh n);
		friend int ravi(nilesh n1);		
		
};

 int jay(nilesh n)
 {
 	cout<<n.a<<endl<<n.tv<<endl;
 	
  }
 
 int ravi(nilesh n1)
 {
 	cout<<n1.a<<endl<<n1.tv;
 }
                                         
                                         
int main()
{
	nilesh obj;
	jay(obj);
	ravi(obj);
}*/

//                                                                    *************firend class***********

/*#include<iostream>
using namespace std;
class jaydip;
class ravi;
class nilesh
{
    private:
	    int money=100;
	    
	public:
	    friend int sunil(nilesh n1,jaydip j1,ravi r1);		
	
};

class jaydip
{
	private:
		int money1=200;
	public:
	    friend int sunil(nilesh n1,jaydip j1,ravi r1);	
	
};
class ravi
{
    private:
    	int money2=300;
    public:
	    friend int sunil(nilesh n1,jaydip j1,ravi r1);	
  	
};

int sunil(nilesh n1,jaydip j1,ravi r1)
{

	cout<<n1.money+j1.money1+r1.money2<<endl;
}
int main()
{
	nilesh obj;
	jaydip obj1;
	ravi obj2;
	sunil(obj,obj1,obj2);
}*/

//                                                             *******do while using switch********

/*#include<iostream>
using namespace std;

int main()
{
	char choice,i;
	
	do
	{
	    cout<<"enter your choice:";
		cin>>choice;
		
		switch(choice)
		{
			case '+':
				     cout<<"plus";
				     break;
				     
			case '-':
			        cout<<"minus";
			        break;
						     
		}	
		
	      cout<<"continiu(Y/N)";
	      cin>>i;
    	
    }while(i=='Y');
	
}*/
  
//                                                              *******poiymorphism*******  
 
//=>1.function overloding;
//=>2.function overriding;
//=>3.opretor overloding;  
  
//                                                             ******** 1 . function overloding**********  
  
/*#include<iostream>
using namespace std;

class A
{
	public:
		int a;
		string N;
		
          int nil(int n)
          {
          	a=n;
          	cout<<"A is="<<a<<endl;
		  }
      
          int nil(int c,int n,string N)
          {
          	a=c;
          	cout<<"A is"<<c<<endl<<n<<N;
		  }


};  

int main()
{
	A obj;
	obj.nil(10);
	obj.nil(10,20,"nilesh");

	
} */

//                                                                          ******** 2. function overriding*********

/*#include<iostream>
using namespace std;

class A
{
	public:
		int a;
		
		int nil(int n)
		{
			a=n;
			cout<<"class A"<<endl<<a;
			
			
		}
};
class B : public A
{
	public:
		int b;
		
	    int nil(int m)
	    {
	    	a=m;
	    	cout<<"class B"<<endl<<m<<endl;
		}
	    
	
};
int main()
{
	B obj;
	obj.nil(10);
	obj.nil(20);
	obj.A::nil(500);
}*/

//                                                                  ******** 3.opretor overloding **********

/*#include<iostream>
using namespace std;

class A
{
	public:
		int a,b,c;
		
		int getvlaue(int n)
		{
			a=n;
		
		}
		
		A operator ++()
		{
			a=a+1;
			b=a+1;
			c=b+1;
			
		}
		
		int display()
		{
			cout<<a<<endl<<b<<endl<<c;
		}
};

int main()
{
	A obj;
	obj.getvlaue(10);
	++obj;
	obj.display();
}*/

/*#include<iostream>
using namespace std;

class N
{
    public:
    	int value;
    	
    	int getvalue(int v)
    	{
    		value=v;
		}
		N operator +(N xyz)
    	{
			
			xyz.value=value+xyz.value;
    	}
		
		
    	int display()
		{
	        cout<<value<<endl;		
	    }     

	
};

int main()
{
	N obj,obj1,obj2,obj3,obj4;
	obj1.getvalue(20);
	obj2.getvalue(20);
	obj4.getvalue(20);
    
    obj3=obj1+obj2+obj4; 
  
	obj1.display();
	obj2.display();
	obj4.display();
	obj3.display();	
}*/

//                                                                       ***********templates************

//                                                   *******1.function templates****

/*#include<iostream>
using namespace std;

template<typename N>

N nil(N x,N y)
{
	cout<<x+y<<endl;
}

int main()
{
	nil(10,10);
	nil(10.1,10.1);
	nil('N','N');
//	nil("nilesh","jadav");
	return 0;

}*/

//                                                    ******class templates******

/*#include<iostream>
using namespace std;

template<typename N>

class nil
{
    N heigt,weiht;
	  
	    public:
		
		  N getvalue(N h,N w)
		  {
		  	 heigt=h;
		  	 weiht=w;
		//   cout<<heigt+weiht<<endl;
		  }
		  N display()
		  {
		  	cout<<heigt+weiht<<endl;
		  }
};
int main()
{
   	nil<int>obj;
	nil<float>obj1;
	nil<char>obj2;
	nil<string>obj3;
   	obj.getvalue(10,20);
   	obj.display();
   	obj1.getvalue(10.10,10.10);
   	obj1.display();
   	obj2.getvalue('N','M');
   	obj2.display();
    obj3.getvalue("nilesh"," jadav");
    obj3.display();
    
}*/ 


      
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
          
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
