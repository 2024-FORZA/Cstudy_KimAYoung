#include <stdio.h>
 
int main() {
    int p;
    scanf("%d", &p);
    char arr[41] = { 0, };
    while (p--)
    {
        int check[8] = { 0, };
        scanf("%s", arr);
        for (int i = 0; i < 38; i++)
        {
            if (arr[i] == 'T' && arr[i + 1] == 'T' && arr[i + 2] == 'T')
            {
                check[0]++;
            }
            else if (arr[i] == 'T' && arr[i + 1] == 'T' && arr[i + 2] == 'H')
            {
                check[1]++;
            }
            else if (arr[i] == 'T' && arr[i + 1] == 'H' && arr[i + 2] == 'T')
            {
                check[2]++;
            }
            else if (arr[i] == 'T' && arr[i + 1] == 'H' && arr[i + 2] == 'H')
            {
                check[3]++;
            }
            else if (arr[i] == 'H' && arr[i + 1] == 'T' && arr[i + 2] == 'T')
            {
                check[4]++;
            }
            else if (arr[i] == 'H' && arr[i + 1] == 'T' && arr[i + 2] == 'H')
            {
                check[5]++;
            }
            else if (arr[i] == 'H' && arr[i + 1] == 'H' && arr[i + 2] == 'T')
            {
                check[6]++;
            }
            else
            {
                check[7]++;
            }
        }
        for (int i = 0; i < 8; i++)
        {
            printf("%d ", check[i]);
        }
        printf("\n");
    }
    return 0;
}
