#include<iostream>
#include<exception>
using namespace std;

int main(){
        int numerator,denominator;
        float result;
        cout<<"Enter the numerator: ";
        cin>>numerator;
        cout<<"Enter the denominator: ";
        cin>>denominator;

        try{
                if(denominator == 0){
                        throw denominator;
                }
                else{
                        result = numerator/denominator;
                        cout<<"Result is: "<<result<<endl;
                }
        }
        catch(int a){
                cout<<"Divide by zero exception occured."<<endl;
        }
}

