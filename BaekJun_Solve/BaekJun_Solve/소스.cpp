// 10950
#include <stdio.h>

int main()
{
	int a = 0;

	scanf("%d", &a);

	int b = 0;
	int c = 0;

	for (int i = 1; i <= a; ++i)
	{
		scanf("%d", &b);
		scanf("%d", &c);
		printf("%d\n", b + c);
	}
}