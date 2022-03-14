// 15552
#include <iostream>

using namespace std;

int main()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a;
	int b;
	int c;

	cin >> a;

	for (int i = 0; i < a; ++i)
	{
		cin >> b;
		cin >> c;
		cout << b + c << "\n";
	}

}