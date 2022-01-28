#include<iostream>
using namespace std;
class A{
      public:
           int a;
           A(){
              a = 10;
           }
};
class B: public virtual A{
};
class C: public virtual A{
};
class D: public virtual A{
};
int main(){
    D obj;
    cout<<"Value of 'a':"<<obj.a<<endl;
    return 0;
}
