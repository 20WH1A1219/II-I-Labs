#include <iostream>

#include<string>

using namespace std;

struct Person{

    string name;

    int age;

};

int main(){

    struct Person p;

    cout<<"Enter name: "<<endl;

    cin>>p.name;

    cout<<"Enter age: "<<endl;

    cin>>p.age;

    cout<<endl<<"Name : "<<p.name<<endl;

    cout<<"Age : "<<p.age<<endl;

   

    return 0;

}
