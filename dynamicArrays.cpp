#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> dynArrayNum(3);
	
	dynArrayNum[0] = 365;
	dynArrayNum[1] = -421;
	dynArrayNum[2] = 789;
	
	cout << "number in array: " << dynArrayNum.size() << endl;
	cout << "enter new number for array " << endl;
	
	int anotherNum =0;
	cin >> anotherNum;
	dynArrayNum.push_back(anotherNum);
	
	cout << "numbers in array " << dynArrayNum.size() << endl;
	cout << "last elment of array ";
	cout << dynArrayNum[dynArrayNum.size() -1] << endl;
}
