// 1110
#include <iostream>

using namespace std;

int main() {
	int a;
	int b;
	int c;

	cin >> a;
	if (a < 10)
		a *= 10;
	int tmp = a;
	int cycle = 0;

	do
	{
		cycle++;
		int i = tmp / 10;
		int j = tmp % 10;
		int k = i + j;
		int l = k % 10;
		tmp = j * 10 + l;
	} while (tmp != a);
	cout << cycle << endl;
}