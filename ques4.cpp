#include <iostream>
using namespace std;

void DisplaySumOfInteger(); //function declaration
int main(){
	DisplaySumOfInteger(); //function call
	
}


// function definition
void DisplaySumOfInteger(){
	int num1,num2;
	cout<<"please enter num1 :" <<endl;
	cin>>num1;
	cout<<"please enter num2 :" <<endl;
	cin>>num2;
	cout<<"the sum is -> " <<num1+num2;
}