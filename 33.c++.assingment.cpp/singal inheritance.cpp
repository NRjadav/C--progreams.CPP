#include<iostream>
using namespace std;

class cricketer
{
	protected:
		int total_runs,average_runs,best_runs;
	

};

class batsman : public cricketer
{
	public:
	    int input()
		{
			cout<<"enter total runs batsman:";
		    cin>>total_runs;	
		    cout<<"enter average runs batsman:";
		    cin>>average_runs;
		    cout<<"enter best runs batsman:";
		    cin>>best_runs;
		}	
	    int diplay()
	    {
	    	cout<<"batsman total runs="<<total_runs<<endl;
	    	cout<<"batsman averge runs="<<average_runs<<endl;
	    	cout<<"batsman best parfomans="<<best_runs<<endl;
		}
};


int main()
{
	cout<<"virat kohli runs:"<<endl;
	batsman obj;
	obj.input();
	obj.diplay();
	
	cout<<"rohit sharma runs:"<<endl;
	batsman obj1;
	obj1.input();
	obj1.diplay();
}
