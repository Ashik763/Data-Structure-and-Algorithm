//linked list insertion,deletion,display
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;

};

struct node *head=NULL;
struct node *tail=NULL;
struct node *prev=NULL;
struct node *current= NULL;
//head = NULL;



void insertNode(int data){
    struct node* temp;
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    if(head==NULL && tail==NULL)
    {
        head=temp=newNode;
        newNode->next = NULL;

     }
    else{
        temp->next = newNode;
        temp=newNode;
        newNode->next = NULL;
    }



}
void display()
{
    struct node *temp = head;
    if(temp == NULL){
        printf("List empty");
    }
    else{
        while(temp != NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }

    }

    printf("\n");

}
void deletion(int data){

    struct node* temp = head;
    if(head->data == data)
    {
        head=head->next;
    }

    else{
        while(temp->data != data){
            prev= temp;
            temp=temp->next;


        }
        // printf("temp:%x",temp->next);
        prev->next = temp->next;
   //free(temp);
    }


}
int main()
{
     int data;
    int choice=2;


    insertNode(23);
    insertNode(12);
    insertNode(39);
    insertNode(87);
    display();
    deletion(12);
     display();
     //deletion(23);
     deletion(23);
     deletion(87);
     deletion(39);
     insertNode(67);
     deletion(67);
     printf("last");
     display();
    
}