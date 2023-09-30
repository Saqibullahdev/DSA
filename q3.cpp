#include <iostream>
using namespace std;

void displayfloat(); //function declaration
int main(){
	 
	displayfloat();  //function call
  float x = 10;
  cout<< typeid(x);

}

// function definition
void displayfloat(){  
	float num;
	cout<<"please enter float number";
	cin>>num;
	cout<<"the number is -> " <<num;
}