#include <stdio.h>
#include <stdlib.h>

int gcd(int a,int b)
{
    if(a<=b&&b%a==0)
        return a;
    else if(a<=b&&b%a!=0)
        return gcd(a,b%a);
    else if(a>b&&a%b==0)
        return b;
    else if(a>b&&a%b!=0)
        return gcd(b,a%b);
}

int main()
{
    int m,n,i,j,k,c=0,z=0;
    scanf("%d %d",&m,&n);

    for(i=1;;i++)
    {

        if(i%2!=0)
        {
            j=i;
            k=1;
            while(j!=0)
            {
                if(gcd(j,k)==1)
                    c++;
                if(j==m&&k==n)
                {
                    z=1;break;
                }
                j--;
                k++;

            }
        }

        else if(i%2==0)
        {
            j=1;
            k=i;
            while(k!=0)
            {
                if (gcd(j,k)==1)
                    c++;
                if(k==n&&j==m)
                {
                    z=1;break;
                }
                j++;
                k--;
            }
        }

        if(z==1)
            break;
    }

    printf("%d\n",c);

}
