#include<iostream>
using namespace std;

void selectionSort(int* arr, int n, int startIndex) {
    if(startIndex >= n - 1) {
        return;
    }
    int minIndex = startIndex;
    for (int j = startIndex + 1; j < n; j++) {
        if(arr[j] < arr[minIndex]) {
            minIndex = j;
        }
    }
    swap(arr[minIndex], arr[startIndex]);
    
    selectionSort(arr, n, startIndex+1);
}

int main(){
    int n, arr[100];
    
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    selectionSort(arr, n, 0);

    cout << "Arrays after sorting: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}