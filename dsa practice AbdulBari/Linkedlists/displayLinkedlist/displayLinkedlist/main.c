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

// Function to display the elements of the linked list
void Display(struct Node *p) {
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n"); // Added a newline for better output formatting
}

// Function to display the elements of the linked list in reverse order using recursion
void RDisplay(struct Node *p) {
    if (p != NULL) {
        RDisplay(p->next);
        printf("%d ", p->data);
    }
}

int main(int argc, const char * argv[]) {
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);

    printf("Elements of the linked list: ");
    Display(first);

    printf("Elements of the linked list in reverse: ");
    RDisplay(first);
    printf("\n"); // Added a newline for better output formatting

    return 0;
}

