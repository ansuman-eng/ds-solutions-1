#include <stdio.h>
#include <stdlib.h>

struct node
{
    int f; int s;
    struct node * next;
};

struct node *beg = NULL, *end= NULL, *i= NULL, *j= NULL, *k= NULL;

create_node(int f, int s)
{

    struct node *temp = (struct node *)malloc(sizeof (struct node));
    temp->f=f;
    temp->s=s;
    temp->next= NULL;

    if(end==NULL)
    {
       end= temp;
       beg = temp;

    }

    else
    {
        end->next = temp;
        end = temp;
    }
}

void s_sort(int *a, int n)
{
    int p,q,min,minp,temp;



    for(p=0;p<n;p++)
    {
        min=a[p];
        minp=p;
       for(q=p;q<n;q++)
       {
           if(a[q]<min)
           {
               min=a[q];
               minp=q;
           }
       }

        temp=a[p];
        a[p]=a[minp];
        a[minp]=temp;
    }

    if(n==0)
        printf("_");

    for(p=0;p<n;p++)
        printf("%d ",a[p]);
    printf("\n");
}

int main()
{
   int n,k1,f,s,a,c;
   int *arr=(int *)malloc(n*sizeof(int));
    scanf("%d %d", &n, &k1);
    int z=n;

     while(k1!=0)                                    //POPULATING THE LINKED LIST
     {
         scanf("%d %d", &f, &s);
         create_node(f,s);
         k1--;
     }



for(i=beg;i!=NULL;i=i->next)                    //MAKING THE LIST TRANSITIVE
    for(j=beg;j!=NULL;j=j->next)
 {
     if(i->s==j->f)
     {
        c=0;
        for(k=beg; k!=NULL; k=k->next)
        {
            if((i->f==k->f)&&(j->s==k->s))
                c++;

        }

        if(c==0)
            create_node(i->f, j->s);
     }
 }



 for(a=0;a<n;a++)
 {   c=0;
     for(i=beg;i!=NULL;i=i->next)
     {
         if(i->f==a&&i->s!=a)
         {arr[c++]=i->s;

         }



     }
s_sort(arr,c);

 }


    return 0;
}
