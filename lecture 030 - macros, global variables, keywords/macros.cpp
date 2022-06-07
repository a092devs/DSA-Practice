#include<iostream>
using namespace std;

#define PI 3.14
#define AREAc(r) (PI * r * r)
#define AREAr(l, b) (l * b)

int main(){
    int r, l, b;
    cin >> r; 
    cin >> l >> b;

    cout << "Area of circle is " << AREAc(r) << endl;
    cout << "Area of rectangle is " << AREAr(l, b) << endl;

    return 0;
}