#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int check(int *a, int i, int n)
{
    int j=0,c=0;
    for(j=0;j<n;j++)
    {
        if(a[j]==i)
            c++;
    }

    if(c==0)
        return 1;
    else
        return 0;
}

void printsubset(int *a, int n, int* extra, int ext)
{
    int tot = pow(2,n);
    int i=0, j=0;
    for(i=0;i<tot;i++)
    {
        for(j=0;j<n;j++)
            if(((1<<j) & i))
            printf("%d ", a[j]);

            printextra(extra, ext);

        printf("\n");

    }
}

printextra(int *a, int n)
{
    int i=0;
    for(i=0; i<n;i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int n,k,r;
    scanf("%d",&n);

    int *all=(int *)malloc(n*sizeof(int));
    int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&all[i]);
    }

    scanf("%d", &k);
    int *col=(int *)malloc(k*sizeof(int));
    for(i=0;i<k;i++)
    {
        scanf("%d",&col[i]);
    }

    scanf("%d", &r);
    int *req=(int *)malloc(r*sizeof(int));
    for(i=0;i<r;i++)
    {
        scanf("%d",&req[i]);
    }

    int *ext= (int *)malloc((r-k)*sizeof(int));
    int a=0,b=0,c=0;

    for(a=0;a<r;a++)
    {
        if(check(col,req[a],k)==1)
            ext[c++]=req[a];
    }



    printsubset(col,k, ext, r-k);



}
