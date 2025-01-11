#include<stdio.h>
#define MAX 5
int f=-1,r=-1;
int cq[MAX];
void insert(){
    if((r+1)%MAX==f){
        printf("Overflow!");
    }
    else{
        int val;
        printf("Enter the value to be inserted:");
        scanf("%d",&val);
        if(f==-1) f=0;
    
        r=(r+1)%MAX;
        cq[r]=val;
    }
}
void del(){
    if(f==-1){
        printf("Underflow!!");
        
    }
    else{
        
     
        printf("Deleted item is:%d",cq[f]);
        if(f==r) f=r=-1;
        else  f=(f+1)%MAX;
    }
}
void display(){
    int i;
    if(f==r){
        printf("Underflow!!");
    }
    else {
        int i = f;
        printf("Queue elements are: ");
        while (i != r) {  // Loop to print elements from f to r
            printf("%d\t", cq[i]);
            i = (i + 1) % MAX;
        }
        printf("%d\n", cq[r]);  // Print the last element (r)
    }
    
}
int main(){
    int choice;
    do{
        printf("\nMENU");
        printf("\n1.insertion\n2.deletion\n3.display\n4.exit");
        printf("\nEnter the choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:insert();break;
            case 2:del();break;
            case 3:display();break;
            case 4:printf("\nExiting program");break;
            default:printf("Enter the valid choice!!");break;
            
        }
    }while(choice!=4);
    return 0;
    
}