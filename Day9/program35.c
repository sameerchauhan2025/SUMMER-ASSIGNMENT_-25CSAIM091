
#include <stdio.h>


int main() {
    int rows=5, i, j;
    char ch = 'A';

    
    

    

    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("%c", ch);
        }
        printf("\n");
        ch++; 
    }

    return 0;
}
