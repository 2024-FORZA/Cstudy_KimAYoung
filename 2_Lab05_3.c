#include <stdio.h>

int main()
{
    int num;
    int arr[1000]; // 입력받을 숫자를 저장할 배열
    int i, j;      // 반복문을 위한 변수

    // 숫자의 개수 입력받기
    scanf("%d", &num);

    // 숫자 입력받기
    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    // -1000부터 1000까지 숫자를 비교하는 반복문
    for (i = -1000; i <= 1000; i++) {
        for (j = 0; j < num; j++) {
            if (i == arr[j]) {
                printf("%d\n", arr[j]); // 결과 출력
            }
        }
    }

    return 0;
}
