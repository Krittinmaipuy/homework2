#include <iostream> 
using namespace std;
float cal_com(int,int, float);
int main()
{
    int  salary,sale;
    float  percent_com;
    cout << "Enter Salary  :   ";
    cin >> salary;
    cout << "Enter Sale    :   ";
    cin >> sale;
    cout << "Enter Percent :  ";
    cin >> percent_com;
    cal_com(salary,sale ,percent_com);
    return 0;
}
float cal_com( int salary,int sale,float percent_com)
{
    float sum = sale*(percent_com/100);
    float total = sum+salary;
    cout << "Your Total  = " << total << endl;
    return total;
}