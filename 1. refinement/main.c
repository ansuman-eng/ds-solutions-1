#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node
{
    int n;
    int *a;
    struct node* next;

};

struct node *end=NULL, *beg=NULL, *i, *j;

void create_node(int n)
{
    struct node *temp=(struct node*)malloc(n*sizeof(struct node));
    temp->n=n;
    temp->a=(int*)malloc(n*sizeof (int));

    int p;
    for(p=0;p<n;p++)
    {
        scanf("%d",&(temp->a[p]));
    }

    if(end==NULL)
    {
        end=temp;
        beg=temp;
    }

    else{
        end->next=temp;
        end=temp;
    }
}


void split(int *a, int n)
{
    int up=pow(2,n)-1;
    int i1,j1,k1;
    for(i1=1;i1< up;i1++)
        for(j1=i1+1 ;j1< up;j1++)
    {
        if((i1^j1)==up)

           {

            for(j=beg;(j!=NULL);j=j->next)
            {
                int p=0;
                if(j!=i){
                for(p=0;p<(j->n);p++)
                {
                    printf("%d ",(j->a[p]));
                }
                printf("\n");}
            }

            for(k1=0;k1<n;k1++)              //PRINT FIRST DISJOINT SUBSET
            if((1<<k1)&i1)
            printf("%d ",a[k1]);

            printf("\n");

            for(k1=0;k1<n;k1++)              //PRINT SECOND DISJOINT SUBSET
            if((1<<k1)&j1)
            printf("%d ",a[k1]);

            printf("\n");
            printf("***************************\n");



        }

    }
}

int main()
{   int m,a,n,b;

    scanf("%d", &m);
    while(m!=0)
    {
        scanf("%d",&n);
        create_node(n);
        printf("NODE CREATED\n");
        m--;
    }

    printf("ALL NODES CREATED\n");

    for(i=beg; i!=NULL; i=i->next)
    split(i->a, i->n);




}
