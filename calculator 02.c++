#include<iostream>
using namespace std;

int main(){
	char Operator;
	double num1, num2;
	
	cout<<"Enter the Operator(+,-,*,/,%): "<<endl;
	cin>>Operator;
	
	cout<<"Enter the two operands: "<<endl;
	cin>>num1>>num2;
	
	switch(Operator){
		case '+':
			cout<<"Addition is "<<num1 + num2;
			break;
		case '-':
			cout<<"Subtraction is "<<num1 - num2;
			break;
		case '*':
			cout<<"Multiplication is "<<num1 * num2;
			break;
		case '/':
			cout<<"Divison is "<<num1 / num2;
			break;
		default:
			cout<<"Error! operator is not correct";
			break;
	}
	return 0;
}