#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

 void traversaloflinkedlist(struct Node *ptr){

    while(ptr != NULL){
        printf("Elements: %d\n" ,ptr->data );
        ptr = ptr->next;
    }
}

int main()
{

     struct Node *head;
     struct Node *second;
     struct Node *third;

     head = (struct Node*)malloc(sizeof(struct Node));
     second = (struct Node*)malloc(sizeof(struct Node));
     third= (struct Node*)malloc(sizeof(struct Node));

    head->data = 78;
    head->next = second;

    
    second->data = 654;
    second->next = third;
 
    third->data = 7579;
    third->next = NULL;
 

    traversaloflinkedlist(head);
    return 0;
}