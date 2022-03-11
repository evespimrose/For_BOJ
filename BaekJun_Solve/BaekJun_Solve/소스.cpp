// 2525
#include <stdio.h>

int main()
{
	int h = 0;
	int m = 0;
	int t = 0;
	scanf("%d", &h);
	scanf("%d", &m);
	scanf("%d", &t);

	if (h >= 0 && h <= 23 && m >= 0 && m <= 59 && t >= 0 && t <= 1000)
	{
		h += t / 60;
		m += t % 60;
		if (m >= 60)
		{
			h++;
			m %= 60;
		}
		if (h >= 24) 
			h %= 24;
		printf("%d %d", h, m);
	}
}