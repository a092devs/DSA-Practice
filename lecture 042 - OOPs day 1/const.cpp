#include<iostream>
using namespace std;
class Demo{
   int val;
   public:
   Demo(int x = 0){
      val = x;
   }
   int getValue() const{
      return val;
   }
};
int main(){
   const Demo obj(28);
   Demo obj1(8);
   cout << "The value using object obj: " << obj.getValue() << endl;
   cout << "The value using object obj1: " << obj1.getValue() << endl;

   return 0;
}