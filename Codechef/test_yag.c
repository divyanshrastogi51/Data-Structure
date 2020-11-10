#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>
struct node

{

    int data;

    struct node*next;

}*front=NULL, *rear=NULL;



void insertb(int x)

{

    struct node*t;

    t=(struct node*)malloc(sizeof(struct node));

    if(t==NULL)

        printf("full");

    else

    {

        t->data=x;

        if(front==NULL)

        {

            t->next=NULL;

            front=rear=t;

        }

        else

        {

            t->next=NULL;

            rear->next=t;

            rear=t;

        }

    }

}



void insertf(int x)

{

    struct node*t;

    t=(struct node*)malloc(sizeof(struct node));

    if(t==NULL)

        printf("full");

    else

    {

        t->data=x;

        if(front==NULL)

        {
            front=rear=t;

            t->next=NULL;
        }

        else

        {

            t->next=front;

            front=t;

        }

    }

}



int deletef()

{

    struct node*t;

    int x=-1;

    if(front==NULL)

        printf("empty");

    else

    {

        t=front;

        front=front->next;

        x=t->data;

        free(t);

    }

    return x;

}



int deleteb()

{

    struct node*t, *temp;

    t=front;

    temp=t;

    t=(struct node*)malloc(sizeof(struct node));

    temp=(struct node*)malloc(sizeof(struct node));

    int x=-1;

    if(front==NULL)

        printf("empty");

    else

    {

        while(t->next!=NULL)

        {

            temp=t;

            t=t->next;

        }

        x=t->data;

        temp->next=NULL;

        rear=temp;

        free(t);

    }

    return x;

}



void display()

{

    struct node*t;

    t=front;

    while(t)

    {

        printf("%d", t->data);

        t=t->next;

    }

}



int main()

{



    insertf(10);

    insertf(20);

    deleteb();

    display();

    return 0;

}
