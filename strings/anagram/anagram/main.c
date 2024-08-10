#include <stdio.h>

int main(int argc, const char * argv[]) {
    char A[] = "decimal";
    char B[] = "medical";

    int H[26] = {0}; // Initialize all elements of H to 0
    int i;
    
    for (i = 0; A[i] != '\0'; i++) {
        H[A[i] - 'a'] += 1;
    }
    for (i = 0; B[i] != '\0'; i++) {
        H[B[i] - 'a'] -= 1;
        if(H[B[i] - 'a']<0){
            printf("Not Anagram\n");
            return 0;
        }
    }
    if(B[i]=='\0')
        printf("Anagram\n");
    
    return 0;
}
