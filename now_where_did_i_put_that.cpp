#include <iostream>
using namespace std;

int find (string text, char letter) {
	for (int i = 0; i < text.size(); i ++) {
		if (text[i] == letter) {
			return i;
		}
	}
return -1;
}

int find (string text, string subtext) {
	for (int i = 0; i < text.size(); i++) {
		if (subtext.compare(text.substr(i, subtext.size() )) == 0) {
	
			return i;
		}
	}

	return -1;
}

int main () {
	cout << find("The quick brown fox", 'e') << endl;
	cout << find("The quick brown fox", "e") << endl;
	cout << find("The quick brown fox", ' ') << endl;
	cout << find("The quick brown fox", "quick") << endl;
	cout << find("The quick brown fox", "quiet") << endl;
	return 0;
}

