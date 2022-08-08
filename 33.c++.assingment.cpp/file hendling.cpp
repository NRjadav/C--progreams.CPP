#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

int main()
{
///	ofstream file1;
	
	char data[50];
	
//	file1.open("C:/Users/shree/NRjadav.txt",ios::out);
//	
//	
//	cout<<"enter any data:  ";
//	cin>>data;
//	cout<<data;
//  
//   gets(data);
//   puts(data);
//   file1<<data;
//	
//	file1.close();
	
	ifstream file2;
	
	file2.open("C:/Users/shree/NRjadav.txt",ios::in);
	
	file2>>data;
	cout<<data;
	
	
	
}

