#include <iostream>
using namespace std;

int main()
{
	int a[5];
	cout << "mengisi array" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "data ke-" << (i);
		cin >> a[i];
	}
	cout << "membaca array" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "data ke-" << (i + 1) << " :" << a[i] << endl;
	}

}
