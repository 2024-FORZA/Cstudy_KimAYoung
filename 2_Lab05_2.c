#include <stdio.h>

// 최대공약수를 구하는 함수 (유클리드 호제법)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 최소공배수를 구하는 함수
int lcm(int a, int b, int gcd_val) {
    return (a * b) / gcd_val;
}

int main(void) {
    int a, b;
    
    // 두 수 입력 받기
    scanf("%d %d", &a, &b);
    
    // 최대공약수 계산
    int gcd_val = gcd(a, b);
    
    // 최소공배수 계산
    int lcm_val = lcm(a, b, gcd_val);
    
    // 결과 출력
    printf("%d\n%d\n", gcd_val, lcm_val);
    
    return 0;
}
