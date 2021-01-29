#include <iostream>
using namespace std;
int main()
{
	int F, S, T ,M ,FI;
	cout << "==========QUIZZES===========" << endl;
	cout << "Enter first quizz  (10) : ";
	cin >> F;
	cout << "Enter second quizz (10) : ";
	cin >> S;
	cout << "Enter third quizz  (10) : ";
	cin >> T;
	cout << "==========MID-TERM==========" << endl;
	cout << "Enter Mid-term     (40) : ";
	cin >> M;
	cout << "============FINAL===========" << endl;
	cout << "Enter Final        (50) : ";
	cin >> FI;
	float total,AGV;
	total = (float)(F + S + T) / 3;
	AGV   = M + FI + total;
	cout << "QUIZZ Total  :  " << total << endl;
	cout << "Mid Term     :  " << M     << endl;
	cout << "Final        :  " << FI    << endl;
	cout << "Total        :  " << AGV   << endl;
	cout << "Your score is   " << (( AGV >= 50)  ? "PASS" : "ERROR ");
	return 0;
}
