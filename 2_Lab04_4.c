#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int year, month, date;
    scanf("%d-%d-%d", &year, &month, &date);
    
    int N;
    scanf("%d", &N);

    date += N;

    // 날짜가 30을 초과할 경우 처리
    while (date > 30) {
        date -= 30;
        month++;

        // 월이 12를 초과할 경우 처리
        if (month > 12) {
            month = 1;
            year++;
        }
    }

    printf("%d-%02d-%02d\n", year, month, date);

    return 0;
}
