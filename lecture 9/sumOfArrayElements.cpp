#include<iostream>
using namespace std;

int sumOfArray(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n, arr[100];
    cout << "Enter the size of the array: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "The sum of the array is: " << sumOfArray(arr, n) << endl;

    return 0;
}