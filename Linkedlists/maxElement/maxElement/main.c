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

int max(struct Node *p){
    int m=0;
    while(p){
        if(p->data > m){
            m=p->data;
        }
        p=p->next;
            
    }
    return m;
}

int Rmax(struct Node *p){
    int x=0;
    if(p==0)
        return 0;
    else{
        x=max(p->next);
        if(x>p->data)
            return x;
        else
            return p->data;
    }
}

int main(int argc, const char * argv[]) {
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);

    printf("%d",Rmax(first));

    return 0;
}

