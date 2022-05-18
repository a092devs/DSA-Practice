#include<iostream>
#include<vector>
using namespace std;

void sieve(bool prime[]) {

    prime[0] = prime[1] = 0;

    for(int i=2;i<=1000000;i++){
        prime[i]= true;
    }

    for(int i = 2; i<=1000000; i++) {

        if(prime[i]){
            for(int j = 2*i; j<=1000000; j+=i){
                prime[j] = false;   
            }
        }
    }
}

int main() {

    bool prime[1000001];
    sieve(prime);

    int n;
    cin >> n;
    while(n!=-1) {
        if(prime[n]) {
            cout << "It is a Prime Number" << endl;
        }
        else{
            cout << "It is not a Prime Number" << endl;
        }
        cin >> n;
    }

    return 0;
}