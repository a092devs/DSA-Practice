#include<iostream>
using namespace std;

void printTheDiamond(int r, int c, int n){
	for (int y = 0; y < r; y++){
		int z = n;
		for (int i = 1; i <= n; i++){
			for (int x = 0; x < c; x++){
				for (int j = 1; j <= 2 * n; j++){
					if (j < z || j > 2 * n - z + 1){
						cout << "e";
					}
					else if (j == z){
						cout << "/";
					}
					else if (j == 2 * n - z + 1){
						cout << "\\";
					}
					else{
						cout << "o";
					}
				}
			}
			z--;
			cout << endl;
		}
		int e = 1;
		for (int i = 1; i <= n; i++){
			for (int x = 0; x < c; x++){
				for (int j = 1; j <= 2 * n; j++){
					if (j < e || j > 2 * n - e + 1){
						cout << "e";
					}
					else if (j == e){
						cout << "\\";
					}
					else if (j == 2 * n - e + 1){
						cout << "/";
					}
					else{
						cout << "o";
					}
				}
			}
			e++;
			cout << endl;
		}
	}
}

int main(){
    int r, c, n;
    cin >> r >> c >> n;
    printTheDiamond(r, c, n);
}