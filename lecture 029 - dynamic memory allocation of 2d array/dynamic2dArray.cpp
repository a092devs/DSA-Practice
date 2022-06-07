#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    int **arr = new int *[n];

    // creating 2D array
    for (int i = 0; i < n; i++){
        arr[i] = new int[m];
    }

    cout << "Enter the elements of the array" << endl;
    // taking user input 
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Printing the elements of the array" << endl;
    // printing output
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory
    for (int i = 0; i < n; i++){
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}