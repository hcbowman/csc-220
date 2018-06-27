#include<iostream>

using namespace std;

class MyClass {
	
	public:
	
		int i;
	
		MyClass(int x1, string& myString) {
		
		i = x1;
		myString = myString;
		
		}
	
};

int main() {
	
	MyClass myObj1;
	MyClass myObj2(10, "Activity8"); 
	
	return 0;
	
	
}