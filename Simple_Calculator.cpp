#include<iostream>
using namespace std;
int main(){
    float a,b;
    char op;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Choose the operation(+,-,*,/): ";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<"The sum of the numbers is: "<<a+b;
        break;
    case '-':
        cout<<"The difference of the numbers is: "<<a-b;
        break;
    case '*':
        cout<<"The product of the numbers is: "<<a*b;
        break;
    case '/':
        if(b!=0){
        cout<<"The quotient of the numbers is: "<<a/b;
        }else{
            cout << "Denominator cannot be zero";
        }
        break;                
    
    default:
       cout << "Invalid operator!";
       break;
    }
return 0;    
}