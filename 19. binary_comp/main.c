#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, n1, a[64],c=0,k=0;
  scanf("%d",&n);
  n1=n;

  while(n!=0)
    {
        a[k]=n%2;
        n/=2;

        if(a[k]==1)
            c++;
            k++;
    }

    if(n1==0)
        printf("No");
    else{
        if(2*c==k)
            printf("Yes");
        else
            printf("No");
    }

    return 0;

}
