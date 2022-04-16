#include<iostream>
using namespace std;

int main(){
    int amount;
    cout <<"Enter the amount: ";
    cin >> amount;

    int hundred, fifty, twenty, one;

    switch (1){
    case 1: hundred = amount / 100;
            amount = amount % 100;                                                  
            cout << "The number of 100 rupee note is: " << hundred << endl;

    case 2: fifty = amount / 50;
            amount = amount % 50;
            cout << "The number of 50 rupee note is: " << fifty << endl;

    case 3: twenty = amount / 20;
            amount = amount % 20;
            cout << "The number of 20 rupee note is: " << twenty << endl;

    case 4: one = amount / 1;
            amount = amount % 1;
            cout << "The number of 1 rupee note is: " << one << endl;
    }

    return 0;
}