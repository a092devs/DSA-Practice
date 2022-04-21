#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    int minIndex;
    
    for (int i = 0; i < n; i++){
        minIndex = i;
        for (int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
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

    selectionSort(arr, n);

    cout << "Arrays after sorting: ";
    printArray(arr, n);

    return 0;
}