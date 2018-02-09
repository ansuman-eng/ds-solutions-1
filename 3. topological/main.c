#include <stdio.h>
#include <stdlib.h>

int checkcolumn(int **a,int j,int n){

int c=0;
int i;
for(i=0;i<n;i++)
{
    if(a[i][j]!=0)
        c++;
}

if(c==0)
    return 1;
else
    return 0;

}

int makerow(int **a, int i,int n){
int j;
for(j=0;j<n;j++)
    a[i][j]=0;
}

int check(int *b, int n, int n1)
{
    int i,c=0;
    for(i=0;i<n1;i++)
    {
        if(b[i]==n)
            c++;
    }
    if(c==0)
        return 1;
    else
        return 0;
}
int main()
{
    int n,i=0,k,j=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int **a=(int **)malloc(n*sizeof(int *));
    int *b=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        a[i]=(int *)malloc(n*sizeof(int));
    }

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        a[i][j]=0;

    while(k!=0)
    {
        scanf("%d %d",&i,&j);
        a[i][j]=1;

        k--;
    }

    for(i=0;i<n;i++)
        b[i]=-1;

    k=0;

    for(j=0;j<n;j++)
    {
        if(checkcolumn(a,j,n)==1&&check(b,j,n)==1)
        {
        b[k++]=j;
        makerow(a,j,n);
       // for(i=0;i<n;i++)




        j=-1; //since increment operator adds one in the end, and we need zero in the next init.

        }
    }

    for(i=0;i<n;i++)
        printf("%d ",b[i]);



}
