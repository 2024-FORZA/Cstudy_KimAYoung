#include <stdio.h>

long long int factorial(long long int n)
{
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}

int main()
{
    long long int num;

    scanf("%lld",&num);

    printf("%lld",factorial(num));

    return 0;
}
