#include <iostream>
using namespace std;

class vehicle{
    public:
    vehicle(){
        cout << "This is a vehicle" << endl;
    }
};

class Car : public vehicle{
    public:
    Car(){
        cout << "This is a car" << endl;
    }
};

class Racing{
    public:
    Racing(){
        cout << "This is for Racing" << endl;
    }
};

class Ferrari : public Car, public Racing{
    public:
    Ferrari(){
        cout << "Ferrari is a Racing Car" << endl;
    }
};

int main(){
    Ferrari f;

    return 0;
}