#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int num;
    struct node *llink;
    struct node *rlink;
};
typedef struct node *N;
N inser_rear(int info, N first)
{
    N t, c;
    t = (N)malloc(sizeof(struct node));
    t->num = info;
    t->rlink = NULL;
    t->llink = NULL;
    if (first == NULL)
    {
        return t;
    }
    c = first;
    while (c->rlink != NULL)
    {
        c = c->rlink;
    }
    // if (c == first)
    // {
    //     c->rlink = t;
    //     t->llink = c;
    // }
    c->rlink = t;
    t->llink = c;
    return first;
}
void display(N first)
{
    N c = first;
    while (c != NULL)
    {
        printf("%d", c->num);
        c = c->rlink;
    }
}
N number()
{
    printf("Enter the number one by one");
    N c=NULL;
    int num;
    for(int i=0;i<10;i++){
        scanf("%d",&num);
        c=inser_rear(num,c);
    }
    return c;
}
N add_num(N a,N b){
    N c=a,d=b,ans=NULL;
    int carry=0;
    for(int i=0;i<10;i++){
        c=c->rlink;
        d=d->rlink;
    }
    for(int i=0;i<10;i++){
        ans->num=((c->num+d->num)%10);
        carry=(c->num+d->num)/10;
        ans=ans->rlink;
    }
    return ans;
}
void main()
{
    N num1,num2,ans=NULL;
    num1=number();
    num2=number();
    ans=add_num(num1,num2);
    display(ans);
}