#include <iostream>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	int arr[100];
	for (int a = 1; a <= N; a++)
	{
		arr[a] = a;
	}

	for (int a = 1; a <= M; a++)
	{
		int i, j;
		cin >> i >> j;
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	for (int a = 1; a <= N; a++)
	{
		cout << arr[a] << " ";
	}
}