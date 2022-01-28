#include<iostream>
using namespace std;
int add(int x,int y)
{
    cout<<x+y<<endl;
    return 0;
}
float add(float a,float b)
{
      cout<<a+b<<endl;
      return 0;
}
double add( double x,double y)
{
       cout<<x+y<<endl;
       return 0;
};
int main(){
    add(20,40);
    add(23.45,34.5);
    add(40.345,20.433);
    return 0;
}
