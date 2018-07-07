#include<iostream>
#include<vector>

using namespace std;

int main() {
	
	int input;
	int i;
	unsigned  int ui;
	
	
	cout << "Enter vector size: ";
	cin >> input;
	
	vector<int> v1(input);
	
	
	for (i = 0; i <= input ; i++) {
		v1.push_back(i);
	}
	
	
	for (ui = 0; ui <= v1.size(); ui++) {
		cout << v1[ui] << ", ";
	}
	
	return 0;
	
}