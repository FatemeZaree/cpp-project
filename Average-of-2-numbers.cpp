#include <iostream>

using namespace std;

int main ()
{
    int number1 , number2 ;

    cout << "inter number1 :" ;
    cin >> number1 ;
    
    cout << "inter number2 :" ;
    cin >> number2 ;

    float sum = number1+number2 ;
    
    float avg = sum/2;
    
    cout <<"average of tow numbers is : "<<avg;

    return 0;
}