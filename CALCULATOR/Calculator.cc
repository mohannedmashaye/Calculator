#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

#include "Calculator.h"
///math function implementations
int Calculator::add(int a, int b){
	return a + b;
}

int Calculator::subtract(int a, int b){
	return a - b;
}

int Calculator::multiply(int a, int b){
	return a * b;
}

int Calculator::divide(int a, int b){
	return a/b;
}

int Calculator::calculate(){
	int input = 0;
	int operand1 =0;
	int operand2 = 0;
	cout<< "Calculator Menu" << "\n-----------------"<< endl;
	cout<< "Options: " << "\n1) Add \n2) Subtract \n3) Multiply \n4) Divide" << endl;
	cout<<"Please enter in a menu option: ";
	cin>>input;
	cout<< "Please enter in your 2 values \n" << "Value 1: ";
	//getline(cin, operand1); 
	cin>>operand1;
	cout<<"Value 2: ";
	//getline(cin, operand2);
	cin>>operand2;
	//we gonna use a switch statement, its like a more efficent long if statement, it takes in a variable and compares
	//different values to the variable
	switch(input){
		case 1: 
			cout<< "The answer is: " << add(operand1, operand2) << endl;
			break;
		case 2:
			cout<< "The answer is: " << subtract(operand1, operand2)<< endl;
			break;
		case 3:
			cout<< "The answer is: " << multiply(operand1, operand2)<< endl;
			break;
		case 4:
			cout<< "The answer is: " << divide(operand1, operand2)<< endl;
			break;
		default:
			cout<< "Invalid Menu option." <<endl;
	}
	return 0;
}
