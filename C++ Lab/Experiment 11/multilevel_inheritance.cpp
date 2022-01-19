#include<iostream>
using namespace std;

class Grand_parent{
	public:
	int a;
	Grand_parent(){
		a = 10;
	}
	void display1(){
		cout<<"a = "<<a<<endl;
	}
};

class parent:public Grand_parent{
	public:
	int b;
	parent(){
		b = 20;
	}
	void display2(){
		cout<<"b = "<<b<<endl;
	}
};

class child:public parent{
	public:
	int c;
	child(){
		c = 30;
	}
	void display3(){
		cout<<"c = "<<c<<endl;
	}
};

int main(){
	child obj;
	obj.display1();
	obj.display2();
	obj.display3();
	return 0;
}
