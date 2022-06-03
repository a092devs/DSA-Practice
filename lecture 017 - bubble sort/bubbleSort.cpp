#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = 1; i < n; i++){
        for (int j = 0; j < n - i; j++){
            if (arr[j] > arr[j + 1]){
                // swap(arr[j], arr[j + 1]);
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n, arr[100];
    
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Arrays before sorting: ";
    printArray(arr, n);
    cout << endl;

    bubbleSort(arr, n);

    cout << "Arrays after sorting: ";
    printArray(arr, n);

    return 0;
}