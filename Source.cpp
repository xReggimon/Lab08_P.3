#include <iostream>
using namespace std;

int romanCharValue(char r) {
	switch (r) {
	case 'I' : return 1;
	case 'V': return 5;
	case 'X': return 10;
	case 'L': return 50;
	case 'C': return 100;
	case 'D': return 500;
	case 'M': return 1000;

	}
}

int main() {
	
	char L = 'L';
	char M = 'M';

	cout << romanCharValue(L) << " " << romanCharValue(M);
	return 0;
}