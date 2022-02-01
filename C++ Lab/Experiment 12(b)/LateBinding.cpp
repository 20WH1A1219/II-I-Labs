#include<iostream>
using namespace std;
class Base{
      public:
          int a;
          void read(){
               cout<<"Enter the value of 'a':"<<endl;
               cin>>a;
          }
          void display(){
               cout<<"Value of 'a':"<<a<<endl;
          }
};
class Derived : public Base{
       public:
           int b;
           Derived(){
               a = 45;
           }
           void read(){
                cout<<"Enter the value of'b':"<<endl;
                cin >> b;
           }
           void display(){
                cout<<"Value of 'a':"<<a<<endl<<"Value of 'b':"<<b<<endl;
           }
};
int main(){
    Base obj;
    Derived obj1;
    obj.read();
    obj.display();
    obj1.read();
    obj1.display();
    return 0;
}
