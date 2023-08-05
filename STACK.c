//Stack using Linked List

#include<stdio.h>
typedef struct NODE
{
    int data;
    struct NODE *link;
}node;

node *head=NULL;
void add_first(int data)
{
    node temp=(node)malloc(sizeof(node));
    temp->link=head;
    temp->data=data;
    head=temp;

}

void display()
{
    node *ptr1;
    if(head==NULL)
    {
        printf("\n List is Blank ");
        return;
    }
    else
    {
        ptr1=head;
        while(ptr1!=NULL)
        {
            printf("%d\t",ptr1->data);
            ptr1=ptr1->link;
        }

    }

}

void add_last(int data)
{
    node temp=(node)malloc(sizeof(node));
    temp->link=NULL;
    temp->data=data;
    node *ptr=head;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;

}
void first_delete()
{
    node *temp;
    if(head==NULL)
    {
        printf("\n List is Blank");
        return;
    }
    else
    {
        temp=head;
        head=temp->link;
        printf("\nDeleted value is %d",temp->data);
        free(temp);
    }

}


int main()
{
int ch,data;

do
{
    printf("\n Enter your choice ");
    printf("\n 1.Add Fisrt\t2.Add Last 3.Del First 4.Del Last 5. Display 6.Exit ");
    scanf("%d",&ch);
    switch(ch)
    {
                case 1:
                        printf("\n Enter the data ");
                        scanf("%d",&data);
                        add_first(data);
                        break;
                case 2:
                        printf("\n Enter the data ");
                        scanf("%d",&data);
                        add_last(data);
                        break;


                case 3:
                        first_delete();
                        break;
                case 4 :
                case 5:
                        display();
                        break;
                case 6:
                default :
                        break;


    }


}while(ch!=6);



return 0;
}
