#include<iostream>
#include<exception>
using namespace std;
struct MyException:public exception{
	const char* what() const throw(){
		return "My exception";
	}
};
int main(){
	int n;
	cout<<"Enter num:";
	cin>>n;
	try{
		if(n>=0 && n<=15){
			cout<<"Valid"<<endl;
		}
		else{
		throw MyException();
		}
	}
	catch(MyException &e){
		cout<<"Enter a number between 0 and 15"<<endl;;
		cout<<e.what();
	}
}
