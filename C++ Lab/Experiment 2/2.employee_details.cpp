#include<iostream>
using namespace std;

class EMPLOYEE{
	string name;
	int id;
	int basic;
	float DA;
	float IT;
	float net_salary;
	
	public:
	void get_details(){
		cout<<"Enter the name of employee: ";
		cin>>name;
		cout<<"Enter the ID of employee: ";
		cin>>id;
		cout<<"Enter the Basic Salary: ";
		cin>>basic;
		cout<<"Enter the DA: ";
		cin>>DA;
		cout<<"Enter the IT: ";
		cin>>IT;
	}
	void print_details(){
		cout<<"Name of the employee: "<<name<<endl;
		cout<<"ID of the employee: "<<id<<endl;
		cout<<"Basic Salary of the employee: "<<basic<<endl;
		cout<<"DA is : "<<DA<<endl;
		cout<<"IT is: "<<IT<<endl;
		cout<<"Net Salary of the employee: "<<basic+DA-IT<<endl;
	}
};

int main(){
	EMPLOYEE e;
	e.get_details();
	e.print_details();
	return 0;
}
