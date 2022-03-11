// 2525
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	int prize;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if (a == b && b == c)
	{
		prize = 10000 + (a * 1000);
	}
	else if (a == b) prize = 1000 + (a * 100);
	else if (a == c) prize = 1000 + (a * 100);
	else if (b == c) prize = 1000 + (b * 100);
	else {
		if (a > b && a > c) prize = a * 100;
		else {
			if (b > c) prize = b * 100;
			else prize = c * 100;
		}
	}
	printf("%d", prize);
}