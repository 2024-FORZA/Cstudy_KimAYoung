#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[9];
    int sum = 0;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    qsort(arr, 9, sizeof(int), compare);

    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - arr[i] - arr[j] == 100) {
                for (int k = 0; k < 9; k++) {
                    if (k == i || k == j) continue;
                    printf("%d\n", arr[k]);
                }
                return 0;
            }
        }
    }
    return 0;
}
