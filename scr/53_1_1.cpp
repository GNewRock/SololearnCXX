#include <iostream>
using namespace std;

class MyClass{
	public:
	myClass(){
		cout<<"?Hey!";
		}
		void setName(string x){
			name=x;
			}
			string getName(){
				return name;
				}
				private:
				string name;
				};
int main(){
	myClass myObj;
	
	return 0;
	}
