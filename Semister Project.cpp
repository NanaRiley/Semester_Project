#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	char operation;
	double num1,num2,result;
	cout<<"Enter first number";
	cin>>num1;
	
	cout<<"Enter an operator (+,-,*,/,^)";
	cin>>operation;
	
	cout<<"Enter second number";
	cin>>num2;
	
	switch (operation){
	case '+':
		result= num1 + num2;
		break;
	case '-':
		result= num1 - num2;
		break;
	case '*':
	    result= num1 * num2;
	    break;
	case '/':
	   result= num1 / num2;
	   break;
	case '^':
	   result=pow(num1,num2);
	   break;
	default:
	   cout<<"Invalid operator";
	   break;       	
	}
	cout<<"Result"<<result;
	return 0;
}
