#include <stdio.h>
#include <stdlib.h>

int check(int a[], int k, int n)
{
    int *b=(int *)malloc((n+1)*sizeof(int));
    int i, j=0;

    for(i=k;j<(n+1);j++)
    {
        b[j]=i;
        i=(i+a[i])%n;
    }

    for(i=0;i<n+1;i++)
    {   int z=0;
        for(j=i+1;j<n;j++)
            if(b[i]==b[j])
        {   z=1;
            break;
        }

        if(z==1)
            break;
    }

    if(b[i]==k)
        return 1;
    else
        return 0;

}

int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));




    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(check(a,i,n)==1)
        c++;
    }

    printf("%d\n",c);
}
