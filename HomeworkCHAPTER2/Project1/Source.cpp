#include<iostream>
#include<string>

using namespace std;
int main()
{
	int salary, sale ,percent,total;
	int num = 100;
	string text;
	cout << "Enter Name   :   "; 
	getline(cin,text) ;
	cout << "Enter Salary    :  ";
	cin >> salary ;
	cout << "Enter Sale      :  ";
	cin >> sale;
	cout << "Enter Commission Percent  :  ";
	cin >> percent;
	cout << "----------output----------" << endl ;
	cout << "Your name = " << text << endl ;
	total = sale * percent / num;
	cout << "Total Revenue " << total+salary << " Bath " << endl ;
	cout << "- - - - - - - - - - - - - - - - ";
	return (0);

}