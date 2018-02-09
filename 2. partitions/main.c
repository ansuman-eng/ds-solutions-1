#include <stdio.h>
#include <stdlib.h>

int part(int n,int k)
{

    if(k>n)
        return 0;
    if(k==n)
        return 1;
    if (k==1)
        return 1;
    if (n==0)
        return 0;

    else
        return part(n-1,k-1)+ part(n-k,k);
}


int main()
{
    int n,k,i;
    scanf("%d %d",&n,&k);
    int sum= 0;

    sum=part(5,2);

   /* for(i=1;i<=n;i++)
        if(n>=i*(k-1))
        sum+=part(n-i*(k-1),i); */

    printf("%d\n", sum);

    return 0;

}
