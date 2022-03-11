// 2884
#include <stdio.h>

int main()
{
	int h = 0;
	int m = 0;
	scanf("%d", &h);
	scanf("%d", &m);

	if (h >= 0 && h <= 23 && m >= 0 && m <= 59)
	{
		if (m >= 45)
		{
			m = m - 45;
		}
		else if (m < 45)
		{
			if (h > 0)
			{
				h = h - 1;
			}
			else
			{
				h = h + 23;
			}
			m = m + 15;
		}
		printf("%d %d", h, m);
	}
}