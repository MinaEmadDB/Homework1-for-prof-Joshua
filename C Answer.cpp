#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	string titles[1000];
	int counts[1000] = { 0 };
	for (int i = 0; i < n; i++) {
		string title;
		cin >> title;
		bool found = false;
		for (int j = 0; j < i; j++) {
			if (titles[j] == title) {
				counts[j]++;
				cout << title << counts[j] << endl;
				found = true;
				break;
			}
		}
		if (!found) {
			cout << "OK" << endl;
			titles[i] = title;
			counts[i] = 1;
		}
	}
	return 0;
}