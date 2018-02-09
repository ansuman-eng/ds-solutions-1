#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fact(int n)
{
    int prod=1, i=1;
    for(i=1;i<=n;i++)
    {
        prod*=i;
    }

    return prod;
}

int main()
{
    int n;
    scanf("%d", &n);

    int i, sum=0;
    for(i=0;i<=n;i++)
    {
        sum+= (fact(n)*(n-i))/(fact(i)*fact(n-i));
    }

    printf("%d", sum);
}
