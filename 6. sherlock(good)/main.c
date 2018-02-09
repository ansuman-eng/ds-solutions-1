#include <stdio.h>
#include <stdlib.h>

struct node
{
    int *a;
    int no;
    struct node * next;
};

struct node *beg = NULL, *end= NULL, *i= NULL, *j= NULL, *k= NULL;

create_node(int n)
{
    int z;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->a=(int *)malloc(n*sizeof(int));
    temp->no=n;
    temp->next= NULL;

    for(z=0;z<n;z++)
    {
        scanf("%d",&(temp->a[z]));
    }


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

static count=0;

int check(int *a)
{
    int c=0,p,q,c1=0;



    for(p=0; p <((i->no)-1); p++)
    {
        c=0;
        for(q=0;q<count;q++)
        {
            if(i->a[p]==a[q])
                c++;
        }



        if(c==0)
        {c1=1;
        break;}

    }
    if(c1==1)
        return 0;
    else
        return 1;
}

int checkint(int z, int *truth)
{
    int a,c=0;
    for(a=0;a<count;a++)
        if(truth[a]==z)
        c++;

        if(c==0)
        return 1;
    else return 0;
}

int main()
{
    int n,k1,a,nt,pt;
    scanf("%d %d",&n,&k1);

    while(k1>0)
    {
        scanf("%d", &a);
        create_node(a+1);
        printf("NODE CREATED\n");
        k1--;

    }

    printf("NODES CREATED\n");

    int *truth= (int*)malloc(n*sizeof(int));
    scanf("%d", &nt);

    while(nt!=0)
    {   scanf("%d",&pt);
        truth[count++]=pt;
        nt--;
    }

    printf("TRUTH ARRAY INTITATED\n");
    i=beg;


    for(i=beg;i!=NULL;i=i->next)
    {
        if(check(truth)==1&&checkint(i->a[(i->no)-1], truth))
        {
            truth[count++]=i->a[(i->no)-1];
            i=beg;
        }
    }

    int z=0;
    for(z=0;z<count;z++)
        printf("%d ",truth[z]);


}
