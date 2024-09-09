#include <stdio.h>
#include <string.h>

// Function to swap two characters
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Function to print all permutations of a string
void permute(char *str, int l, int h) {
    if (l == h) {
        printf("%s\n", str);
    } else {
        for (int i = l; i <= h; i++) {
            swap((str + l), (str + i));
            permute(str, l + 1, h);
            swap((str + l), (str + i)); // backtrack
        }
    }
}

int main(int argc, const char * argv[]) {
    char str[] = "ABC";
    printf("Permutations of %s:\n", str);
    permute(str, 0, 2);
    return 0;
}
