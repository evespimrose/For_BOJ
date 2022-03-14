// 8393
#include <stdio.h>

int main()
{
	int a = 0;
	int r = 0;

	scanf("%d", &a);

	for (int i = 1; i <= a; ++i)
	{
		r += i;
	}
	printf("%d", r);
}