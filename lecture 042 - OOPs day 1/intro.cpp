#include<bits/stdc++.h>
using namespace std;

class Hero {  
    //properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    Hero() {
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }

    //Paramerterised Constructor
    Hero(int health) {
        this -> health = health;
    }

    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

    //copy constructor
    Hero(Hero& temp) {

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout << endl;
        cout << "[Name: " << this->name << ",";
        cout << "health: " << this->health << ",";
        cout <<"level: " << this->level << "]";
        cout << endl;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }

    static int random() {
        return timeToComplete ;
    }

    //Destructor
    ~Hero() {   
        cout << "Destructor bhai called" << endl;
    }

};

int Hero::timeToComplete = 5;

int main() {

    //cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;

    // Hero a;

    // cout << a.timeToComplete << endl;


    // Hero b;
    // b.timeToComplete = 10 ;
    // cout  << a.timeToComplete << endl;
    // cout << b.timeToComplete << endl;


    // //Static
    // Hero a;

    // //Dynamic
    // Hero *b = new Hero();
    // //manually destructor call
    // delete b;

    // Hero hero1;

    // hero1.setHealth(12);
    // hero1.setLevel('D');
    // char name[7] = "Babbar";
    // hero1.setName(name);

    //hero1.print();

//     //use default copy constructor

//     Hero hero2(hero1);
//     //hero2.print();
// //    Hero hero2 = hero1;

//     hero1.name[0] = 'G';
//     hero1.print();

//     hero2.print();

//     hero1 = hero2;

//     hero1.print();

//     hero2.print();

    // //Hero tt;

    // //object created statically
    // Hero John(10);
    // //cout << "Address of John " << &John << endl;
    // John.print();

    // //dynamically
    // Hero *h =  new Hero(11);
    // h->print();

    // Hero temp(22, 'B');
    // temp.print();

    /*
    //static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout << "level is  " << a.level << endl;
    cout << " health is " << a.getHealth() << endl;

    //dynamically
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout << "level is  " << (*b).level << endl;
    cout << " health is " << (*b).getHealth() << endl;
    cout << "level is  " << b->level << endl;
    cout << " health is " << b->getHealth() << endl;
    */

    // //creation of Object
    // Hero John;   
    // cout << "Size of John is " << sizeof(John) << endl;

    // cout << "John health is " << John.getHealth() << endl;
    // //use setter
    // John.setHealth(70);
    // John.level = 'A';


    // cout << "John's health is: " << John.getHealth() << endl; 
    // cout << "John's level is: " << John.level << endl; 

    // //cout << "size : " << sizeof(h1) << endl;

    return 0;
}
