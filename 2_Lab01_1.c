#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct {
    char str[21];
    int index;
} Pair;

int compare(const void* a, const void* b) {
    return strcmp(((Pair*)a)->str, ((Pair*)b)->str);
}

int main() {
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;

        Pair v[1000], v2[1000];

        for (int i = 0; i < n; i++) {
            char s[21];
            scanf("%s", s);
            strcpy(v[i].str, s);
            v[i].index = i;

            for (int j = 0; j < strlen(s); j++) {
                s[j] = tolower(s[j]);
            }
            strcpy(v2[i].str, s);
            v2[i].index = i;
        }

        qsort(v2, n, sizeof(Pair), compare);

        for (int i = 0; i < n; i++) {
            if (v2[0].index == v[i].index) {
                printf("%s\n", v[i].str);
                break;
            }
        }
    }

    return 0;
}
