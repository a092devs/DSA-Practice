#include<iostream>
using namespace std;

int fibonacci(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 2; i < n; i++)
    {
        int temp = a + b;
        a = b;
        b = temp;
    } 
      return b;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "The " << n <<"th term of the series is: " << fibonacci(n) << endl;

    return 0;
}