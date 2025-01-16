#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *newnode(int data){
    struct Node *node=(struct Node*)malloc(sizeof(struct Node));
    node->data=data;
    node->left=node->right=NULL;
    return node;
}
struct Node *insert(struct Node *root,int data){
    if(root==NULL) return newnode(data);
    if(data<root->data) root->left=insert(root->left,data);
    else{
        root->right=insert(root->right,data);
        return root;
    }
}
void inorder(struct Node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
void preorder(struct Node *root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct Node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}
struct  Node* search(struct Node* root,int data){
    if(root == NULL  || root->data == data) return root;
    if(data < root->data) return search(root->left,data);
    return search(root->right,data);
}
int main(){
    struct Node *root=NULL;
    root = insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,70);
    insert(root,60);
    insert(root,80);
    printf("preorder\n");
    preorder(root);
    printf("\n");
    printf("postorder\n");
    postorder(root);
    printf("\n");
    printf("Inorder\n");
    inorder(root);
    printf("\n");
    struct Node* result = search(root,40);
    if (result) printf("Found: %d\n",result->data);
    else printf("Not Found\n");
    return 0;
}
