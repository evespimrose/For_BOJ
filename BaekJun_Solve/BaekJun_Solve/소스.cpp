// 2753
#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d", &a);

	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
	{
		printf("1");
	}
	else if(a >= 1 && a <= 4000)
	{
		printf("0");
	}
}