#include<iostream>
using namespace std;

class bank
{
	private:
		int atmpin,balance,acount_no;
	public:
		string bank_name,IFSC;
	
	    int intput()
		{
			atmpin=1234;
			balance=10000;
			acount_no=789456123;
			bank_name="sbi bank";
			IFSC="SBI0000";
	    } 	
	    
	    int output()
	    {
	    	cout<<"my atmpin is= "<<atmpin<<endl;
	    	cout<<"my bankbalance is= "<<balance<<endl;
	    	cout<<"my acount no is= "<<acount_no<<endl;
	    	cout<<"my bank name is= "<<bank_name<<endl;
	    	cout<<"my bank ifsc code is= "<<IFSC<<endl<<endl;
		}
	    	
	
};

int main()
{
	bank obj;
	obj.intput();
	obj.output();
   
    cout<<"jaydip my bank acount acsses...!"<<endl;
//	cout<<obj.atmpin<<endl;
//	cout<<obj.balance<<endl;
//	cout<<obj.acount_no<<endl;
	cout<<obj.bank_name<<endl;
	cout<<obj.IFSC<<endl;
		
	
	return 0;
}






