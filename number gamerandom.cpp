#include<iostream>
#include<string>
#include<time.h>
using namespace std;
int main()
{
	int num1, num ,i=1;
	cout << "###Welcome to guessing number game###" << endl;
	cout << "Secret number has been chosen"<<endl;
	srand(time(NULL));
	{
		num1 = 1 + rand() % 10;
	}
	cout << "Guess the number (1 to 10) : ";
	cin >> num;
	while (num != num1) {
		cout << "Guess the number(1 to 10) : ";
		cin >> num;
		i++;

	if (num == num1) {
	cout << "Congratulations!" << endl;
	cout << "The secret number is : "<< num1 << endl;
	cout << "You made " << i << " guesses";
	}
	}
	return 0;	
}
