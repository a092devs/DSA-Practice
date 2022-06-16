#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key){
    int s = 0, e = n - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while(s <= e){
        if (arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid]){
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOccurence(int arr[], int n, int key){
    int s = 0, e = n - 1;
    int ans = -1;
    int mid = s + (e - s)/2;

    while(s <= e){
        if (arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid]){
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int main(){
    int n, arr[100], key;
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter the element to search its first and last occurence: ";
    cin >> key;

    cout << "The first occurence of " << key << " is: " << firstOccurence(arr, n, key) << endl;
    cout << "The last occurence of " << key << " is: " << lastOccurence(arr, n, key) << endl;

    return 0;
}