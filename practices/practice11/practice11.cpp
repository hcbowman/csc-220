#include<iostream>

using namespace std;

class MyClass {
	
	public:
	
		int i;

		MyClass(int x1) {
		
		i = x1;
		}
		
		MyClass(int x1, string& myString) {
		
		i = x1;
		myString = myString;
		}
		
		void print() const{
			cout << "  Printing: " << i << endl;
		}
		
		bool operator== (const MyClass &m);
		bool operator < (const MyClass &m);
		bool operator > (const MyClass &m);
	
};

bool MyClass::operator== (const MyClass &m) {
	if(i == m.i) {
		return true;
	}
	return false;
}

bool MyClass::operator < (const MyClass &m) {
	return (i < m.i);
}

bool MyClass::operator > (const MyClass &m) {
	return (i > m.i);
}

int main() {
	
	MyClass m1(8);
	MyClass m2(10);
	
	MyClass m3(15);
	MyClass m4(15);
	
	m1.print();
	m2.print();
	m3.print();
	m4.print();
	
	cout << "m1.operator==(m2)  " << m1.operator==(m2) << endl;
	cout << "m1.operator==(m2)  " << m3.operator==(m4) << endl;
	
	cout << "m1.operator<(m2)  " << m1.operator<(m2) << endl;
	cout << "m3.operator<(m4)  " << m3.operator<(m4) << endl;
	
	
	return 0;
	
	
}