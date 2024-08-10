#include <stdio.h>

int main(int argc, const char * argv[]) {
    char a[] = "how are you";
    /*  int i, v = 0, c = 0;
     for(i = 0; a[i] != '\0'; i++) {
     if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
     a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') {
     v++;
     }
     else if((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')) {
     c++;
     }
     }
     printf("Consonants: %d, Vowels: %d\n", c, v);*/
    int i =0 ; int w = 1;
    
    for(i ; a[i]!='\0';i++){
        if(a[i]==' ' && a[i-1]!=' '){
            w++;
        }
    }
    printf("Words : %d",w);
    
    return 0;
}
