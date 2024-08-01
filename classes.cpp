#include<iostream>
using namespace std;

class MyClass {
	public:
		int sum(int a, int b) {
			return a + b;
		}
};

int main() {

	MyClass myclass;

	cout<<"Sum is:" << myclass.sum(10, 5);

	return 0;
}