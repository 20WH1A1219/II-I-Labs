#include<iostream>
#include<exception>
using namespace std;
class exception2 {
	public:
		int a, b;
		void read(){
			cout << "enter the value of a and b:";
			cin >> a >> b;
		}
		void try_catch() {
			try {
				try{
					if(b == 0){
						throw b;
					}
					else if(b > 0) {
						cout << "the value of a / b is" << a / b;
					}
					else {
						throw b;
					}
				}
				catch(int b) {
					cout << "Handle partially" << endl;
					throw;
				}
			}
			catch(int b) {
				if(b == 0){
					cout << "divide by zero exception caught" << endl;
					}
				else {
					cout << "the value of b should be positive";
				}
			}
		}
};
int main() {
	exception2 obj;
	obj.read();
	obj.try_catch();
	return 0;
}
	
	
	
	
	

			
