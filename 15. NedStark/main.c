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

int checkreflex(int z)
{
    int c=0;
    int a;
    for(a=0;a<z;a++)
    {
        for(i=beg;i!=NULL;i=i->next)
        {
            if(i->f==a&&i->s==a)
                c++;
        }
    }

    if(c==z)
        return 1;
    else
        return 0;
}

int checksymm(int z)
{   int c=0;
     for(i=beg;i!=NULL;i=i->next)
     {
        for(j=beg;j!=NULL;j=j->next)
        {
          if(i->f==j->s&&i->s==j->f&&i->f!=i->s)
            c++;

          if(c!=0)
            break;
        }

        if(c!=0)
            break;
     }
     if(c!=0)
        return 0;
     else
        return 1;
}

int checktrans(int z)
{   int c = 1, exist=1;
    for(i=beg;i!=NULL;i=i->next)
      {

       for(j=beg;j!=NULL;j=j->next)
        {
            if(i->s==j->f)
            {c=0;
                for(k=beg;k!=NULL;k=k->next)
                {
                    if(k->f==i->f&&k->s==i->s)
                    c++;
                }

             if(c==0)
             exist=0;

            }

        if(exist==0)
            break;


    }
    if(exist==0)
        break;
    }

    return exist;
}

int main()
{
    int n,k1,f,s;
    scanf("%d %d", &n, &k1);
    int z=n;
     while(k1!=0)
     {
         scanf("%d %d", &f, &s);
         create_node(f,s);
         k1--;
     }

       if(checkreflex(z)==1&&checksymm(z)==1&&checktrans(z)==1)
        printf("Yes");

    else
        printf("No");


}
