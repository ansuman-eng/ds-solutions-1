#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, pu,i, nu, p=1;
    scanf("%d%d", &m,&n);
    int mu= m%10;

    if(n%4==0&&n!=0)
    {
        if(mu==2||mu==4||mu==6||mu==8)
            pu=6;
        else if(mu==3||mu==7||mu==9)
            pu =1;
        else
            pu = mu;


    }

    else if(n=0)
        pu=1;

    else{

        nu=n%4;
        for(i=1; i<=nu;i++)
           {
            p*=mu;

           }
        pu=p%10;
    }
    printf("%d\n", pu);
    return 0;
}
