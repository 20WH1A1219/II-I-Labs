#include<iostream>

using namespace std;

class employe{

        char name[100];

        int id;

        float salary;

        public:

            void read(){

            cout<< "Enter the name: ";

            cin>>name;

            cout<<"Enter the id: ";

            cin>>id;

            cout<< "Enter the salary: ";

            cin>>salary;

            }

            void display(){

                    cout<<endl<<"Name: "<<name<<endl;

                    cout<<"ID: "<<id<<endl;

                    cout<<"Salary: "<<salary<<endl;

             }

};

int main(){

      employe emp;

      employe *ptr = &emp;

      ptr -> read();

      ptr -> display();

 

return 0;

}
