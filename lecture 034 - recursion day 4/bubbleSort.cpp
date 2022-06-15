#include<iostream>
using namespace std;

void bubbleSort(int *arr, int n){
    if (n == 0 || n == 1)
        return;

    for (int i = 0; i < n - 1; i++){
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }

    bubbleSort(arr, n - 1);
}

int main(){
    int n, arr[100];
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "Arrays in sorted order: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}