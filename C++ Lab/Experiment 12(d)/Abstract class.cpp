#include<iostream>
#include<string.h>
using namespace std;
class A{
    int x = 5;
public:
    virtual void display() = 0;
};
class B: public A{
    int y = 10;
    public:
       void display(){
            cout<<"Derived class:"<<y<<endl;
       }
};
int main(){
    A *a;
    B b;
    a=&b;
    a -> display();
    return 0;
}
