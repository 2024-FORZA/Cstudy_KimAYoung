#include <stdio.h>
#define MAX 9223372036854775807

int of(long long *pr, long long s) {
    int r = 0;
    if (*pr > MAX - s)
        r = 1, *pr = *pr - MAX + s;
    else
        *pr += s;
    return r;
}

int uf(long long *pr, long long s) {
    int r = 0;
    if (*pr < -MAX - s)
        r = -1, *pr = *pr + MAX + s;
    else
        *pr += s;
    return r;
}

int main() {
    int t = 3;
    while (t--) {
        int n, r, c = 0;
        long long s, res = 0;
        scanf("%d", &n);
        while (n--) {
            scanf("%lld", &s);
            r = s > 0 ? of(&res, s) : uf(&res, s);
            c += r;
        }
        if (res == MAX)
            c++, res = 0;
        if (res == -MAX)
            c--, res = 0;
        char p;
        if (c > 0)
            p = '+';
        else if (c < 0)
            p = '-';
        else {
            if (res > 0)
                p = '+';
            else if (res < 0)
                p = '-';
            else
                p = '0';
        }
        printf("%c\n", p);
    }
    return 0;
}
