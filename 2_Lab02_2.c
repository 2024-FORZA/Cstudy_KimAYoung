#include <stdio.h>

int main()
{
    int N;
    int num = 666;
    int cnt = 0;

    scanf("%d", &N);

    while (1) {
        int temp = num;         
        int check = 0;          

        while (temp > 0) {
            if (temp % 1000 == 666) {
                check = 1;          
                break;
            }
            temp /= 10;
        }

        if (check) {
            cnt++;
        }

        if (cnt == N) {     
            printf("%d", num);
            break;
        }

        num++;
    }

    return 0;
}
