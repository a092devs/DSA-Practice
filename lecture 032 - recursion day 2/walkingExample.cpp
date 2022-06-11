#include<iostream>
using namespace std;

void reachHome(int src, int dest){
    cout << "Source " << src << " Destination " << dest << endl;

    if (src == dest){
        cout << "Reached home" << endl;
        return;
    }

    // src++;
    
    reachHome(++src, dest);
}

int main(){
    int dest, src;
    cout << "Enter your destination: ";
    cin >> dest;
    cout << "Enter your source: ";
    cin >> src;

    reachHome(src, dest);

    return 0;
}