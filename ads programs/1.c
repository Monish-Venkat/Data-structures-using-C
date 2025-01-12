#include <stdio.h>
#include <stdlib.h>
int a[10];
int pos,val,n=0,i=0;
void display();
void insert();
void Delete();
int main(){
    int choice=1;
    printf("Enter the size ");
    scanf("%d",&n);
    printf("Enter the array elemnts: \n");
    for(i==0;i<n;i++){
        scanf("%d",&a[i]);
    }
    while(choice!=4){
        printf("Enter the choice ");
        scanf("%d",&choice);
        switch(choice){
            case 1:insert();
            break;
            case 2:Delete();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            default:printf("Invalid choice\n");
        }
    }
    return 0;
}
void insert(){
    printf("Enter the number ");
    scanf("%d",&val);
    printf("Enter the loc ");
    scanf("%d",&pos);
    if(pos>n)  
        printf("Location not found\n");
    else{
        for(i=n;i<=pos;i--){
            a[i+1]=a[i];
        }
        a[pos]=val;
        n=n+1;
    }
}
void Delete(){
    printf("Enter the loc ");
    scanf("%d",&pos);
    if(pos>n)  
        printf("Location not found\n");
    else{
        val=a[pos];
        for(i=pos;i<=n;i++){
            a[i]=a[i+1];
        }
        n=n-1;
    }
}
void display(){
    printf("Array ele are ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
