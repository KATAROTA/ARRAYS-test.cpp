#include <iostream>

using namespace std;

int printArray(int mas[5]){
	for(int i=0; i<5;i++) {
		cout << mas[i] << " ";
}
}

int main() {
		int numbers[5] = { 120,30,40,205,52 };
		cout << "Which element of array you want to rewrite?" << endl;
		int index= 0;
		cin>> index;
		cout << "rewrite to what?" << endl;
		int newValue= 0;
		cin>> newValue;
		numbers[index] = newValue;
		printArray(numbers);
		return 0;
}
