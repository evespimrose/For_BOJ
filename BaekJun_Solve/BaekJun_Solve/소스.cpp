// 10871
#include <iostream>

using namespace std;

int main() {
	int n{};
	int x{};
	int value{};
	cin >> n >> x;
	
	for (int i = 0; i < n; ++i)
	{
		cin >> value;
		if (value < x)
			cout << value;
	}
	
}