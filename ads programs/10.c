#include <stdlib.h>
#include <stdio.h>

struct node {
    int co;
    int deg;
    struct node *next;
};

struct node *insert(struct node *head, int co, int deg) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->co = co;
    newnode->deg = deg;
    if (head == NULL) {
        head = newnode;
        newnode->next = head;
    } else {
        struct node *temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = head;
    }
    return head;
}

struct node *create(struct node *head) {
    int n, co, deg;
    printf("\nEnter the number of terms: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter the coefficient of term %d: ", i + 1);
        scanf("%d", &co);
        printf("Enter the degree of term %d: ", i + 1);
        scanf("%d", &deg);
        head = insert(head, co, deg);
    }
    return head;
}

void print(struct node *head) {
    if (head == NULL) {
        printf("No terms in polynomial!!\n");
    } else {
        struct node *temp = head;
        do {
            printf("%dx^%d", temp->co, temp->deg);
            temp = temp->next;
            if (temp != head)
                printf(" + ");
        } while (temp != head);
        printf("\n");
    }
}

void addpoly(struct node *head1, struct node *head2) {
    struct node *temp1 = head1;
    struct node *temp2 = head2;
    struct node *head3 = NULL;
    do {
        if (temp1->deg == temp2->deg) {
            head3 = insert(head3, temp1->co + temp2->co, temp1->deg);
            temp1 = temp1->next;
            temp2 = temp2->next;
        } else if (temp1->deg > temp2->deg) {
            head3 = insert(head3, temp1->co, temp1->deg);
            temp1 = temp1->next;
        } else {
            head3 = insert(head3, temp2->co, temp2->deg);
            temp2 = temp2->next;
        }
    } while (temp1 != head1 || temp2 != head2);
    while (temp1 != head1) {
        head3 = insert(head3, temp1->co, temp1->deg);
        temp1 = temp1->next;
    }
    while (temp2 != head2) {
        head3 = insert(head3, temp2->co, temp2->deg);
        temp2 = temp2->next;
    }
    print(head3);
}

int main() {
    struct node *head1 = NULL;
    struct node *head2 = NULL;
    head1 = create(head1);
    print(head1);
    head2 = create(head2);
    print(head2);
    addpoly(head1, head2);
    return 0;
}
