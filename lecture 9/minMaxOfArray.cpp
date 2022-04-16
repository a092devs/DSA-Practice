#include<iostream>
#include<climits>
using namespace std;

int getMin(int arr[], int n){
    int minimum = INT_MAX;
    
    for (int i = 0; i < n; i++){

        minimum = min(minimum, arr[i]);

        // if (arr[i] < minimum){
        //     minimum = arr[i];
        // }
    }
    return minimum;
}

int getMax(int arr[], int n){
    int maximum = INT_MIN;
    
    for (int i = 0; i < n; i++){

        maximum = max(maximum, arr[i]);

        // if (arr[i] > max){
        //     maximum = arr[i];
        // }
    }
    return maximum;
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[100];
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Minimum value is " << getMin(arr, size) << endl;
    cout << "Maximum value is " << getMax(arr, size) << endl;

    return 0;
}
