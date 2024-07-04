#include <stdio.h>

int	t, x, y, result, black[101][101] = {};

void	draw(int x, int y)
{
	int	i;
	int	j;

	for(i = y; i < y + 10; i++)
	{
		for(j = x; j < x + 10; j++)
			black[i][j]++;
	}
}

int main(void)
{
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		scanf("%d %d", &x, &y);
		draw(x, y);
	}
	result = 0;
	for(int i = 0; i < 101; i++)
	{
		for(int j = 0; j < 101; j++)
		{
			if (black[i][j])
				result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
