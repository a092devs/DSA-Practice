#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main(){
    int n, arr[100];
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array:" << endl;
    for (int i =0; i < n; i++){
        cin >> arr[i];
    }

    insertionSort(arr, n);
    cout << "The arrays after sorting: ";
    printArray(arr, n);

    return 0;
}