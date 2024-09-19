#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Rev(int num) {
	int reversed = 0;
	while (num > 0) {
		reversed = reversed * 10 + num % 10;
		num /= 10;
	}
	return reversed;
}

int main(){
	int x, y;
	scanf("%d %d", &x, &y);

	int revX = Rev(x);
	int revY = Rev(y);

	int result = Rev(revX +revY);

	printf("%d\n", result);

	return 0;

}
