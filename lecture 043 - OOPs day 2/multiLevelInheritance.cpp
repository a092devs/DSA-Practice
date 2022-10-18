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
    public:
    void eat(){
        cout << "Eating" << endl;
    } 
};

class Labrador: public Dog{

};

int main(){
    Labrador l;
    l.bark();
    l.eat();

    return 0;
}