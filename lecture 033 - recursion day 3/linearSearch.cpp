#include<iostream>
using namespace std;

bool linearSearch(int *arr, int n, int k){
    if (n == 0)
        return false;
    
    if (arr[0] == k)
        return true;
    else
        return linearSearch(arr + 1, n - 1, k);
}

int main(){
    int n, arr[100], key;
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter the key to search in the array: ";
    cin >> key;

    if (linearSearch(arr, n, key))
        cout << key << " is present" << endl;
    else
        cout << key << " is not present" << endl;

    return 0;
}