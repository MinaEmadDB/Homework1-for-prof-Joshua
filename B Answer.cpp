#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter the number of project"<<endl;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int a, b, c;
		cout << "Enter the vote "<<endl;
		cin >> a >> b >> c;
		if (a + b + c >= 2)
			cout << "Approved"<<endl;
		else 
			cout<<"Denied"<<endl;
	}
}