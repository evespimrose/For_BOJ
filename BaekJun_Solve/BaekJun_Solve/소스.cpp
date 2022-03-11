// 9498
#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d", &a);

	if (a <= 100 && a >= 90)
	{
		printf("A");
	}
	else if (a <90 && a >= 80)
	{
		printf("B");
	}
	else if(a < 80 && a >= 70)
	{
		printf("C");
	}
	else if (a < 70 && a >= 60)
	{
		printf("D");
	}
	else if (a < 60 && a >= 0)
	{
		printf("F");
	}
}