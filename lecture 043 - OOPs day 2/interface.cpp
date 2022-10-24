#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void sound() = 0;

    void sleeping(){
        cout << "Sleeping" << endl;
    }
};

class Dog: public Animal{
    public:
    void sound(){
        cout << "Woof" << endl;
    }
};

int main(){
    Dog d;
    d.sound();
    d.sleeping();

    return 0;
}