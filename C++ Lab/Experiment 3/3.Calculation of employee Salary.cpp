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
	}
	void print_details(){
		DA = 0.52*basic;
		IT = 0.03*(basic+DA);
		net_salary = basic+DA-IT;
		cout<<"Name of the employee: "<<name<<endl;
		cout<<"ID of the employee: "<<id<<endl;
		cout<<"Basic Salary of the employee: "<<basic<<endl;
		cout<<"DA is : "<<DA<<endl;
		cout<<"IT is: "<<IT<<endl;
		cout<<"Net Salary of the employee: "<<net_salary<<endl;
	}
};

int main(){
	EMPLOYEE e[3];
	int i;
	for(i=0;i<3;i++){
		e[i].get_details();
	}
	for(i=0;i<3;i++){
		e[i].print_details();	
	}
	return 0;
}
