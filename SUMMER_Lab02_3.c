#include <stdio.h>

void convert(int N, int B)
{
	if (N != 0)
	{
		convert(N / B, B);
		if (N % B > 9 && B > 10)
			printf("%c", 'A' + N % B - 10);
		else
			printf("%d", N % B);
	}
}

int main()
{
	int N;
	int B;

	scanf("%d", &N);
	scanf("%d", &B);

	convert(N, B);

	return 0;
}
