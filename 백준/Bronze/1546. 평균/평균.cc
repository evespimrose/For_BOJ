#include <iostream>
using namespace std;
int main()
{
	int N;
	double v = 0;
	double m = -1;
	double sum = 0;

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> v;
		sum += v;
		if (m < v)
			m = v;
	}
	cout << ((sum / m) / N) * 100 << endl;
}