#include<iostream>
using namespace std;

int partition(int *arr, int s, int e){
    int pivot = arr[s];

    int cnt = 0;
    for (int i = s + 1; i <= e; i++){
        if (arr[i] <= pivot)
            cnt++;
    }
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex){
        while (arr[i] <= pivot)
            i++;
         while(arr[j] > pivot)
            j--;

        if (i < pivotIndex && j > pivotIndex)
            swap(arr[i++], arr[j--]);
    }

    return pivotIndex;
}

void quickSort(int *arr, int s, int e){
    if (s >= e)
        return;
    
    int p = partition(arr, s, e);

    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main(){
    int n, arr[100];
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int s = 0, e = n - 1;
    quickSort(arr, s, e);

    cout << "The arrays in sorted order: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}