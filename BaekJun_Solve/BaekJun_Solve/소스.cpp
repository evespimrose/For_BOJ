// 10952
#include <iostream>

using namespace std;

int main() {
	int a;
	int b;
	
	while(true)
	{
		cin >> a >> b;
		if (a == 0 && b == 0)
			break;
		cout << a + b << endl;
	}
}