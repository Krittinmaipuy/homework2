#include<iostream>
using namespace std;
void calAm();
int main(){
	
	cout << "Khoayai Bank Information System **Interest = 3%**"<<endl;
	calAm();
	return 0;

}
void calAm() {
		int money, year, total, i = 1, totalye, totalmn,totalall=0,totalyee;
		do{
		cout << "Input Amount " << i << " : ";
		cin >> money;
		cout << "Input   Year " << i << " : ";
		cin >> year;
		totalye = money*3/100 ;
		totalyee = 	totalye*year+money;
		cout << "Total your money " << i <<" : "<< totalyee<< endl;
		totalall += totalyee ;
		cout << "*******************************"<<endl;
		i++;
		} while (i != 4);
		{
		
			cout << "Total " << i-1 << " people = "<<totalall<<endl;
		}
	
}
