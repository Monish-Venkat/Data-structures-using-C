#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{
    int usn;
    char name[10];
    struct node *next;
};
struct node *head=NULL;
void insertionatfront(){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter name and USN of student with space:");
    scanf("%s %d",&newnode->name,&newnode->usn);
    if(head==NULL){
        head=newnode;
        newnode->next=NULL;
    }
    else{
       
        newnode->next=head;
        head=newnode;
    }
}
void insertionatend(){
    struct node *newnode,*temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter name and USN of student with space:");
    scanf("%s %d",&newnode->name,&newnode->usn);
    if(head==NULL){
        head=newnode;
        newnode->next=NULL;
        
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
    }
    
}
void deleteatfront(){
    struct node *temp=head;
    if(head==NULL){
        printf("\nlinked list is empty!!");
        
    }
    else{
        
        head=head->next;
        free(temp);
    }
}
void deleteatend(){
    struct node *prev,*temp=head;
    if(head==NULL){
        printf("\nlinked list is empty!!");
        
    }
    else{
        while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        free(temp);
    }
}
void display(){
    struct node *temp=head;
    if(head==NULL){
        printf("\nlinked list is empty!!");
        
    }
    else{
       while(temp!=NULL){
           printf("\nName of the student and usn are:%s %d",temp->name,temp->usn);
           temp=temp->next;
       }
    }
}

int main() {
    
    
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Insert at Front\n");
        printf("2. Display List\n");
        printf("3. Insert at End\n");
        printf("4. Delete from Front\n");
        printf("5. Delete from End\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertionatfront();
                break;
            case 2:
                display();
                break;
            case 3:
                insertionatend();
                break;
            case 4:
                deleteatfront();
                break;
            case 5:
                deleteatend();
                break;
            case 6:
                 printf("Exiting program.\n");
                 break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 6);

    return 0;
}