#include<iostream>
#include<string>
using namespace std;

int main() {

	string gender;
	int age;

	cout<<"Enter your gender:"<<endl;
	cin>>gender;

	cout<<"Enter your age:"<<endl;
	cin>>age;

	if ((gender == "male" && age >= 24) || (gender == "female" && age >= 21))
		cout<<"Eligible to marriage"<<endl;
	
	else
		cout<<"Not Eligible to marriage"<<endl;

	return 0;

}