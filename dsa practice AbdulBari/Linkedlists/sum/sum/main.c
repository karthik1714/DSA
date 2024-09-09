#include <stdio.h>
#include <stdlib.h>

// Definition of the Node structure
struct Node {
    int data;
    struct Node *next;
} *first = NULL;

// Function to create a linked list from an array
void create(int A[], int n) {
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++) {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int count(struct Node *p){
    int c=0;
    while(p!=0){
        c++;
        p=p->next;
    }
    return c;
}

int Rcount(struct Node *p){
    if(p==0)
        return 0;
    else
        return 1+Rcount(p->next);
}

int Rsum(struct Node *p){
    if(p==0)
        return 0;
    else
        return p->data+Rsum(p->next);
}

int sum(struct Node *p){
    int sum=0;
    while(p!=0){
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
        
}

int main(int argc, const char * argv[]) {
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);

    printf("%d\n",Rsum(first));
    printf("%d",Rcount(first));


    return 0;
}

