#include <stdio.h>
int main(){
    int mush[12] = {0}, sum[12] = {0}, gap[12] = {0}, max;
    for (int i = 1; i < 11; i++){
        scanf("%d", &mush[i]);
        sum[i] += sum[i-1] + mush[i];
        gap[i] = (100 > sum[i]) ? (100 - sum[i]) : (sum[i] - 100);
    }

    max = gap[1];
    for (int i = 1; i < 11; i++){
        if (max > gap[i]) max = gap[i];
    }
    for (int i = 10; i > 0; i--){
        if (max == gap[i]){
            printf("%d", sum[i]);
            break;
        }
    }
    return 0;
}
