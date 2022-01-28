#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    char details[75];
    fstream fs;
    fs.open("File.txt", ios::trunc | ios::out );
    cout<<"Enter your name:"<<endl;
    cin.getline(details,100);
    fs << details << endl;
    cout << "Enter your Age:" << endl;
    cin >> details;
    fs << details << endl;
    fs.close();
    fs.open("File.txt",ios :: in);
    string line;
    cout << "Reading from text file" << endl;
    while(getline(fs,line)){
        cout<<line<<endl;
    }
    fs.close();
    return 0;
}
