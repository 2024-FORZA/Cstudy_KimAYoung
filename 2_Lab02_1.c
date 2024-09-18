#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int A = 0, B = 0;
    int arr[1001] = { 0 }; // 1001 크기의 배열 선언
    int index = 1;         // 배열 인덱스를 1부터 사용
    int current_number = 1; // 현재 수를 1로 시작

    // 수열 생성
    for (int i = 1; index <= 1000; i++) {
        for (int j = 1; j <= i && index <= 1000; j++) { 
            arr[index++] = i; // 수열의 숫자를 배열에 채워 넣기
        }
    }

    // A와 B 입력받기
    scanf("%d %d", &A, &B);

    // A부터 B까지의 합 구하기
    int sum = 0;
    for (int i = A; i <= B; i++) {
        sum += arr[i];
    }

    // 결과 출력
    printf("%d\n", sum);

    return 0;
}
