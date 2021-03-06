#include<iostream>
using namespace std;

void printDigit(int n, string str[]){
    if (n == 0)
        return;
    
    int digit = n % 10;
    n /= 10;

    printDigit(n, str);
    cout << str[digit] << " ";
}

int main(){
    string str[10] = {"zero", "one", "two", "three", "four",
                    "five", "six", "seven", "eight", "nine"};
    
    int n;
    cout << "Enter a number: ";
    cin >> n;

    printDigit(n, str);

    return 0;
}