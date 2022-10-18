#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout << "Barking" << endl;
    }
};

class Dog: public Animal{

};

int main(){
    Dog d;
    d.bark();

    cout << d.age << endl;
    cout << d.weight << endl;

    return 0;
}