#include <iostream>
using namespace std;

void DisplayLarger(); //function declaration

int main(){
	DisplayLarger(); //function call
	
}

//function definiton
void DisplayLarger(){
	char ch1,ch2;
	cout<<"please enter ch1 :" <<endl;
	cin>>ch1;
	cout<<"please enter che2 :" <<endl;
	cin>>ch2;
	if(ch1>ch2) cout<<"the greater character is " <<ch1;
	else 		cout<<"the greater character is " <<ch2;
}