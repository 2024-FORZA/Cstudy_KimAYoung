#include <stdio.h>
int main(){
	int n, a, b, ball = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d %d", &a, &b);
		if (a == ball) ball = b;
		else if (b == ball) ball = a;
	}
	printf("%d", ball);
	return 0;
}
