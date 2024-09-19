#include <stdio.h>

int main()
{
    double nums[5];
    double max;
    int cnt = 0;

    for(int i = 0; i < 4; i++)
        scanf("%lf", &nums[i]);

    max = nums[0] / nums[2] + nums[1] / nums[3];

    for(int k = 1; k < 4; k++){ 
        nums[4] = nums[2];
        nums[2] = nums[3];
        nums[3] = nums[1];
        nums[1] = nums[0];
        nums[0] = nums[4];

        if(max < nums[0] / nums[2] + nums[1] / nums[3]) {
            max = nums[0] / nums[2] + nums[1] / nums[3];
            cnt = k; 
        }            
    }

    printf("%d\n", cnt);

    return 0;
}
