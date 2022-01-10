#include <iostream>
#include <string.h>
using namespace std;
class person{
      private:
      string name;
      int age;
      public:
      person(){
          cout<<"default Constructor"<<endl;
          name.assign("none");
          age=0;
      }
      person(string n,int a){
          cout<<"parameterized constructor"<<endl;
          name.assign(n);
          age=a;
      }
      person(person&p2){
          cout<<"copy constructor"<<endl;
          name.assign(p2.name);
          age=p2.age;
      }
      void print(void){
          cout<<"name="<<name<<""<<"age="<<age<<endl;
      }
      ~person(){
          cout<<"inside destructor\n";
      }
      
};
int main(){
    person p0;
    p0.print();
    person p1("tanusree\t",19);
    p1.print();
    person p2=p1;
    p2.print();
    return 0;
    
}

