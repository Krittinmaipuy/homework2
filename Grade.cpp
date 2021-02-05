#include <iostream>
using namespace std ;
int main ()
{
	char grade ;
	cout << "Enter your grade (A-F)";
	cin  >> grade ;
	switch (grade){
		case 'A' :cout << "Your score 80-100 points" ;break;
		case 'B' :cout << "Your score 70-79  points" ;break;
		case 'C' :cout << "Your score 60-69  points" ;break;
		case 'D' :cout << "Your score 50-59  points" ;break;
		case 'F' :cout << "Your score 49-0   points" ;break;
		default  :cout << "(A-F) only , Thank you  " ;
	} 
	return 0 ;
}
