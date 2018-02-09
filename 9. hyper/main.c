#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   scanf("%d",&n);

   int *a=(int *)malloc(n*sizeof(int));
   int i,c=0;
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       if(a[i]%2==0)
        c++;
   }

   if(c>0)
    printf("Uatu\n");
   else
    printf("Galactus\n");
}
