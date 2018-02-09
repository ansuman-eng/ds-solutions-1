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







int main()
{

 int n, k1, f, s, c;
 scanf("%d", &n);
 scanf("%d", &k1);

 while(k1!=0)
 {
     scanf("%d %d", &f, &s);
     create_node(f,s);
     k1 --;
 }

 for(i=beg;i!=NULL;i=i->next)
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
 c=0;

 for(i=beg; i!=NULL; i=i->next)
 {
     if(i->f==i->s)
        c++;

        if(c==1)
            break;

 }

    if(c==0)
    printf("Possible");
    else
    printf("Not Possible");
}
