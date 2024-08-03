#include<iostream>

using namespace std;

int multiply(int a, int b, int c = 10) {
	return a * b * c;
}

int main() {

	cout<<multiply(10, 2, 3);

	return 0;
}