#include <iostream>
using namespace std;
int main(){
float w ,  h_m, bmi ,m;
int h, pa ;
string na[50];
cout <<"Enter number of Person: ";
cin>> pa;
cout<<"----------------------------"<<endl;
	for(int i=0;i<pa;i++)
{
	cout <<"Enter name"<<i+1<<" : ";
	cin>> na[i];
	cout <<"Enter Weight"<<i+1<<" : ";
	cin  >> w;
	cout <<"Enter height "<<i+1<<" : ";
	cin  >> h;
	h_m = (float)h/100;
	bmi =w/(h_m * h_m);
	cout<<" BMI = "<<bmi<<endl;
	if (bmi < 16)cout << " Severe Thinness"                <<endl<<"-----------------------------------------------"<<endl; 
{
	if ((bmi >= 16)&&(bmi <= 17))
		cout << "Your Category of BMI is Moderate Thinness"<<endl<<"-----------------------------------------------"<<endl;
	else if ((bmi >= 17)&&(bmi <= 18.5))
		cout << "Your Category of BMI is Mild Thinness"    <<endl<<"-----------------------------------------------"<<endl; 
	else if ((bmi >= 18.5)&&(bmi <= 25))
		cout << "Your Category of BMI is Normal"	       <<endl<<"-----------------------------------------------"<<endl; 
	else if ((bmi >= 25)&&(bmi <= 30))
		cout << "Your Category of BMI is Overweight"       <<endl<<"-----------------------------------------------"<<endl; 
	else if ((bmi >= 30)&&(bmi <= 35))
		cout << "Your Category of BMI is Obese Class I"    <<endl<<"-----------------------------------------------"<<endl; 
	else if ((bmi >= 35)&&(bmi <= 40))
		cout << "Your Category of BMI is Obese Class II"   <<endl<<"-----------------------------------------------"<<endl; 
	else if (bmi >= 40)
		cout << "Your Category of BMI is Obese Class III " <<endl<<"-----------------------------------------------"<<endl;
}
}
return 0;

}
