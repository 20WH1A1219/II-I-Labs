#include<iostream>
using namespace std;
class base {
public:
    virtual void show() {
        cout << "Base class show:\n";
    }

    void display() {
        cout << "Base class display:\n";
    }
};

class derived : public base {
public:

    void display() {
        cout << "Derivred class display: \n";
    }

    void show() {
        cout << "Derived class show: \n";
    }
};

int main() {
    base obj1;
    base *p;
    cout << "P points to base:\n";

    p = &obj1;
    p->display();
    p->show();

    cout << "\nP points to derived:\n";
    derived obj2;
    p = &obj2;
    p->display();
    p->show();
    return 0;
}
