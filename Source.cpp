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

int convertRomanToInt(string s) {
	int answer = 0;
	for (int i = 0;i < s.length(); i++) {
		int current = romanCharValue(s[i]);
		int next = (i < s.length() - 1) ? romanCharValue(s[i + 1]) : 0;
		if (current >= next) {
			answer += current;
		}
		else {
			answer += (next - current);
			i++;
		}
	}
	return answer;
}

int main() {
	
	string L = "L";
	string M = "M";
	string A = "MLMLMLMX";

	cout << convertRomanToInt(M) << " " << convertRomanToInt(L) << " " << convertRomanToInt(A);
	return 0;
}