
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

int count(struct Node *p) {
    int cnt = 0;
    while (p) {
        cnt++;
        p = p->next;
    }
    return cnt;
}

void display(struct Node *p) {
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void insert(struct Node *p,int index,int x){
    
    struct Node *t;
    if(index < 0 || index > count(p) )
        return ;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    if(index==0){
        t->next = first;
        first =t;
    }
    else {
        for (int i=0;i<index-1;i++){
            p=p->next;
            t->next=p->next;
            p->next = t;
        }
    }
        
}

void sortedinsert(struct Node *p,int x ){
    struct Node *t,*q=NULL;
    t=(struct Node*)malloc(sizeof(struct Node));
     t->data=x;
     t->next=NULL;

     if(first==NULL)
     first=t;
     else{
         while(p && p->data<x){
             q=p;
              p=p->next;
         }
         if(p==first){
             t->next=first;
             first =t ;
         }
         else{
             t->next=q->next;
             q->next=t;
         }
     }
}

int Delete(struct Node *p,int index)
{
     struct Node *q=NULL;
     int x=-1,i;

     if(index < 1 || index > count(p))
         return -1;
     if(index==1){
         q=first;
         x=first->data;
         first=first->next;
         free(q);
         return x;
     }
     else{
         for(i=0;i<index-1;i++){
         q=p;
         p=p->next;
         }
     q->next=p->next;
     x=p->data;
     free(p);
     return x;

 }


}

int main(int argc, const char * argv[]) {

    int A[]={10,20,30,40,50};
     create(A,5);
    Delete(first, 2);
    display(first);

    return 0;
}


