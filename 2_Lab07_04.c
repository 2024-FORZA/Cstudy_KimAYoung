#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 

    int m[1000];  
    int max = 0, c = 0;  

    for (int i = 0; i < n; i++) {
        scanf("%d", &m[i]);
    }

    for (int j = 0; j < n; j++) {
        if (m[j] == 0 && c == 0) {
            max++;
            c = 1;
        }

        if (m[j] == 1 && c == 1) {
            max++;
            c = 2;
        }

        if (m[j] == 2 && c == 2) {
            max++;
            c = 0;
        }
    }
    printf("%d\n", max);
    return 0;
}
