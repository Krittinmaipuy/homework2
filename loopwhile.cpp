#include <iostream>
using namespace std;
int main 	()
{
 
	int  PT = 0 , p = 0 , f = 0 ;
	while (PT >= 0  ){
   		cout << "Enter point (0-100) or -999 : ";
   		cin  >> PT ;
   		if (PT >= 50 && PT <= 100 ) p++ ;
   		else if (PT >= 0 && PT <= 49) f++ ;
   		
   			while (PT < 0 || PT > 100){
   				cout << "------------------------------------"<< endl  ;
   				cout << "Re-Enter point (0-100) or -999 : ";
   				cin >> PT ;
   			while (PT == -999)	{
   				cout << "Pass : " << p << endl ; 
   				cout << "fail : " << f << endl ; 
   				break;
    }
	}
   	}
   		
   	
	
   		
   	
    return 0;
}

