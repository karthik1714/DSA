#include <stdio.h>

int main(int argc, const char * argv[]) {
    char A[] = "finding";
    int H[26] = {0}; // Initialize all elements of H to 0
    int i;
    
    for (i = 0; A[i] != '\0'; i++) {
        H[A[i] - 'a'] += 1;
    }
    
    for (i = 0; i < 26; i++) {
        if (H[i] > 1) {
            printf("%c", i + 'a');
            printf("%d",H[i]);// Print the character instead of its ASCII value
            printf("\n");
        }
    }
    
    return 0;
}
