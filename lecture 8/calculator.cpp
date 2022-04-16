#include<iostream>
using namespace std;

int main(){

    int a, b;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    char op;
    cout << "Enter an operator: ";
    cin >> op;

    switch (op){
    case '+': cout << (a+b) << endl;
        break;

    case '-': cout << (a-b) << endl;
        break;

    case '*': cout << (a*b) << endl;
        break;

    case '/': cout << (a/b) << endl;
        break;

    case '%': cout << (a%b) << endl;
        break;
    
    default: cout << "Please enter a valid operator (+, -, *, /, %)" << endl;
        break;
    }
}