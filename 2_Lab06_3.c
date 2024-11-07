#include <stdio.h>
#include <string.h>

int main() {
    char s[101]; // 최대 100자의 문자열을 저장할 배열

    while (1) {
        if (!fgets(s, sizeof(s), stdin)) break; // 문자열 입력받기
        s[strcspn(s, "\n")] = '\0'; // fgets로 읽은 문자열의 개행 제거

        if (strcmp(s, "***") == 0) break; // "***"가 입력되면 종료

        // 문자열을 역순으로 뒤집어 출력
        int len = strlen(s);
        for (int i = len - 1; i >= 0; i--) {
            putchar(s[i]);
        }
        putchar('\n'); // 개행
    }

    return 0;
}
