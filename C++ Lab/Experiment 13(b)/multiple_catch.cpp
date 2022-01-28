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
        catch(int a ){
                cout<<"Divide by zero exception occured : int type"<<endl;
        }
        catch(float i){
                cout<<"Divide by zero exception occured : float type"<<endl;
        }
        catch(char c){
                cout<<"Divide by zero exception occured : char type"<<endl;
        }
        catch(...){
                cout<<"Divide by zero exception occured."<<endl;
        }
}

