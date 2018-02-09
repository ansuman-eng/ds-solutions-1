#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, c=0,i,j,e=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }

    int *a =(int *)malloc(c*sizeof(int));
    int k=0;
    for(i=n;i>=1;i--)
    {
        if(n%i==0)
            a[k++]=i;
    }
    int n1=k;

   for(i=0;i<n1;i++)
        for(j=i+1;j<n1;j++)
    {
        if(a[i]%a[j]==0)
        {   c=0;
           for(k=i+1;k<j;k++)
            if((a[k]%a[j]==0)&&(a[i]%a[k]==0))
            c++;
           if(c==0)
            e++;


        }
    }



    printf("%d\n",e);
}
