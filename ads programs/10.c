#include <stdio.h>
#include<stdlib.h>
struct node{
    int co;
    int deg;
    struct node *next;
};
struct node *insert(struct node *head,int co,int deg){
    struct node newnode=(struct node)malloc(sizeof(struct node));
    newnode->co=co;
    newnode->deg=deg;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        newnode->next=head;
    }
    else{
        struct node *temp=head;
        while(temp->next!=head ){
            temp=temp->next;
            
        }
        temp->next=newnode;
        newnode->next=head;
    }
    return head;
}
void print(struct node *head){
    if(head==NULL){
        printf("There is no polynomial!!");
    
    }
    else{
        struct node *temp=head;
        do{
            printf("%dx%d",temp->co,temp->deg);
            temp=temp->next;
        if(temp!=head){
            printf(" + ");
        }
       
        }while(temp!=head);
    }
}
struct node *create(struct node *head){
    int i,n,co,deg;
    printf("\nEnter the number of terms:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter the coefficient of %d term:",i+1);
        scanf("%d",&co);
        printf("\nEnter the degree of %d term:",i+1);
          scanf("%d",&deg);
        head=insert(head,co,deg);
    }
    return head;
}
void addpoly(struct node *head1,struct node *head2){
    struct node *head3=NULL;
      struct node *temp1=head1;
      struct node *temp2=head2;
     do{
        if(temp1->deg==temp2->deg){
        head3=insert(head3,temp1->co+temp2->co,temp1->deg);
        temp1=temp1->next;
        temp2=temp2->next;
    }
    else if(temp1->deg>temp2->deg){
        head3=insert(head3,temp1->co,temp1->deg);
        temp1=temp1->next;
    }
    else{
         head3=insert(head3,temp2->co,temp2->deg);
         temp2=temp2->next;
    }
}while(temp1!=head1||temp2!=head2);
while(temp1!=head1){
   head3=insert(head3,temp1->co,temp1->deg);
   temp1=temp1->next;
}
while(temp2!=head2){
    head3=insert(head3,temp2->co,temp2->deg);
    temp2=temp2->next;
}
printf("\nAdded polynomial is: ");
print(head3);
}


int main() {
    struct node *head1=NULL;
    struct node *head2=NULL;
    printf("\nEnter the first polynomial:");
    head1=create(head1);
    print(head1);
    printf("\nEnter the first polynomial:");
    head2=create(head2);
    print(head2);
    addpoly(head1,head2);

    return 0;
}