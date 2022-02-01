#include<iostream>
using namespace std;
class overload{
public:
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
}
};
int main(){
    overload obj;
    obj.add(20,40);
    obj.add(23.45,34.5);
    obj.add(40.345,20.433);
    return 0;
}
