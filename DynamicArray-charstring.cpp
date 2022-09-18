#include <iostream>
#include <string.h>

using namespace std;

int main() {
	cout << "enter word, which size is smaller then 20 elements: " << endl;
	char userInput[21] = { '\0' };
	cin >> userInput;
	cout << "Size of word: " << strlen(userInput) << endl;
	cout << "First symphol: " << userInput[0] << endl;
	cout << "Last symphol: " << userInput[strlen(userInput)-1] << endl;
	
	return 0;
	
}
