#include <iostream>
#include <string>
using namespace std;
int main() {
	string x;
	cin >> x;
	for (int i = 0; i < x.size(); ++i)
	{
		char digit = x[i];
		int original = digit - '0';
		int transformed = 9 - original;
		if (i == 0)
		{
			if (transformed < original && transformed != 0)
			{
				x[i] = transformed + '0';
			}
		}
		else {
			if (transformed < original)
			{
				x[i] = transformed + '0';
			}
		}
	}
	cout << x << endl;
	return 0;
}