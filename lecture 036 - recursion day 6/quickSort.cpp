#include<iostream>
using namespace std;

int partition(int *arr, int s, int e){
    int pivot = arr[s];

    int i = s, j = e;
    while (i < j){
        while (pivot >= arr[i])
            i++;
        while (pivot < arr[j])
            j--;
        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[s], arr[j]);
    return j;
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