#include<iostream>
using namespace std;

void calc();

int main()
{
   calc();
    return 0;
}

void calc() {
     int num1, num2, choice;
    cout << "Enter number 1: " << endl;
    cin>> num1;
    cout<< "Enter number 2: "<<endl;
    cin>>num2;

    cout<<"Enter your choice: "<<endl;
    cout<<"1. Add "<<endl;
    cout<<"2. Subtract"<<endl;
    cout<<"3. Multiply"<<endl;
    cout<<"4. Divide"<<endl;

    cin >> choice;

    switch(choice) {
        case 1: {
            cout<<"Sum is: "<< num1 + num2<<endl;
            break;
        }
        case 2: {
            cout<<"Difference is: "<< num1 - num2<<endl;
            break;
        }
        case 3: {
            cout<<"Product is: "<< num1 * num2<<endl;
            break;
        }
        case 4: {
            cout<< "Quotient is: "<<num1 / num2<<endl;
            break;
        }
        default: {
            cout<<"Invalid choice!"<<endl;
        }
    }
}
