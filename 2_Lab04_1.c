#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count = 0;
	int money;

	int Coin[] = { 500, 100, 50, 10, 5, 1 };
	int i = 0;

	scanf("%d", &money);
	money = 1000 - money;

	while (money > 0)
	{
		if (money >= Coin[i])
		{
			money = money - Coin[i];
			count++;
			continue;
		}
		else {
			i++;
		}
	}

	printf("%d", count);
	return 0;
}

