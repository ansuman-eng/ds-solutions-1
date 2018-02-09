#include <stdio.h>
#include <stdlib.h>



void subsetprint(int a[],int start, int end, int index, int d[],int k)
{
    if(index==k)
    {
        int j;
        for(j=0;j<k;j++)

            printf("%d ",d[j]);

        printf("\n");
        return;

    }
    int i;

    for(i=start; (i<=end) && ((end+1-i)>=(k-index)); i++)
    {
        d[index]=a[i];
        subsetprint(a, start+1, end, index +1, d, k);
    }


}



int main()
{
    int n;
    scanf("%d",&n);
    int *a = (int*)malloc(n*sizeof(int));
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    int *d=(int *)malloc(k*sizeof(int));
    subsetprint(a,0,n-2,0,d, k);
}
