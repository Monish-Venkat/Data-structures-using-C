#include<stdio.h>
#include<ctype.h>
#define max 5
int stack[max],i,top=-1;
void push(int x){
    stack[++top]=x;
}
int pop(){
    return stack[top--];
}
int evaluatePostfix(char *exp){
    for(i=0;exp[i]!='\0';i++){
        if(isdigit(exp[i])){
            push(exp[i] - '0');
        }else{
        if(top<0) return -1;
        int op2=pop(),op1=pop();
        switch(exp[i]){
            case '+':push(op1+op2);break;
            case '-':push(op1-op2);break;
            case '*':push(op1*op2);break;
            case '/':push(op1/op2);break;
            default: return -1;
        }
    }
}
return (top==0)?pop():-1;
}
int main(){
    char exp[max];
    printf("Enter postfix expression: ");
    scanf("%s",exp);
    int result=evaluatePostfix(exp);
    printf(result==-1?"Invalid expression":"Result : %d",result);
    return 0;
}