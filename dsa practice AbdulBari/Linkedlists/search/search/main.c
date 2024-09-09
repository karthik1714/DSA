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

struct Node * search(struct Node *p,int key){
    struct Node *q = NULL;
    while(p!=0){
        if(key==p->data){
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
        
}

int main(int argc, const char * argv[]) {
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);

    struct Node *result = search(first, 10);
    if (result != NULL) {
        printf("Node Found: %d\n", result->data);
    } else {
        printf("Node Not Found\n");
    }


    return 0;
}


