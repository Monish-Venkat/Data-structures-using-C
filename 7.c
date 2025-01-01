#include<stdio.h>
#define MAX 10 
int f=-1,r=-1;
int cq[MAX];
void insert(){
    if((r+1)%MAX==f){
        printf("Overflow!");
    }
    else{
        int val;
        printf("Enter the value to be inserted:");
        scanf("%d",val);
        r=(r+1)%MAX;
        cq[r]=val;
    }
}
void del(){
    if(f==r){
        printf("Underflow!!");
        
    }
    else{
        f=(f+1)%MAX;
        printf("Deleted item is:%d",cq[f]);
    }
}
void display(){
    int i;
    if(f==r){
        printf("Underflow!!");
    }
    else{
        for(i=f+1;i!=r+1;i=(i+1)%MAX){
            printf("%d\t",cq[i]);
        }
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