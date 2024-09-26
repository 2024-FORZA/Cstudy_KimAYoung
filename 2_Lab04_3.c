#include <stdio.h>

int main() {
    int t, n, k, candy, ans;
    scanf("%d", &t);
    while (t--) {
        ans = 0;
        scanf("%d %d", &n, &k);
        while (n--) {
            scanf("%d", &candy);
            ans += candy / k;
        }
        printf("%d\n", ans);
    }
    return 0;
}
