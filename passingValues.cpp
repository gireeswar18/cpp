#include<iostream>
using namespace std;

string printStr(string);
int sum(int, int);

int main() {
	
	int a = 5;
	int b = 3;

	cout<<"Sum is: " <<sum(a, b)<<endl;

	return 0;
}

string printStr(string name) {
	return "Hi " + name;
}

int sum(int a, int b) {
	return a + b;
}