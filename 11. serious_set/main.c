#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int serious(int temp[],int n)
{   if(n<2)
    return 0;

    int c=0,i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        if(i!=j)
            if(temp[i]%temp[j])
            c++;
    }

    if((c%2==0&&n%2==0)||(c%2!=0&&n%2!=0))
        return 1;
    else
        return 0;
}

void print_set(int temp[], int n)
{       int i;

    for(i=0;i<n;i++)
        printf("%d ", temp[i]);
    printf("\n");
}

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int pow_set= pow(2,n);
    int *a = (int *)malloc(n*sizeof(int));
    int *temp = (int *)malloc(n*sizeof(int));
    int check;

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=3; i<pow_set; i++)
    {   k=0;
        for(j=0;j<n;j++)
        {
            if(i & 1<<j)
            {
                temp[k++]=a[j];

            }
        }

       check = serious(temp,k);
       if(check==1)
       print_set(temp,k);
    }



}
