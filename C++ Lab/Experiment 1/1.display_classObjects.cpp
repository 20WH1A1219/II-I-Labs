#include<iostream>

using namespace std;

class Student{

    string name;

    int roll_no;

    char grade;

    public:

    void read(){

        cout<<"Enter Student name:"<<endl;

        cin>>name;

        cout<<"Enter Student roll number:"<<endl;

        cin>>roll_no;

        cout<<"Enter Student grade:"<<endl;

        cin>>grade;

    }

    void display(){

        cout<<"Name :"<<name<<endl;

        cout<<"Roll number : "<<roll_no<<endl;

        cout<<"Grade : "<<grade<<endl<<endl;

    }

 

};

int main(){

    Student s[3];

    int i;

    for(i=0;i<3;i++){

        s[i].read();

    }

    for(i=0;i<3;i++){

        s[i].display();

    }

    return 0;

}
