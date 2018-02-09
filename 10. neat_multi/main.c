#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,z=0,m=0,o=0,s,n,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x==0)
            z++;
        else if(x==1)
            o++;
        else if(x==-1)
            m++;
    }

    s=z+o;

    if(s==n||s==n-1)
        printf("YES");

    else if(m>=2&&o>=1&&(m+o+z==n))
            printf("YES");


    else
        printf("NO");
}
