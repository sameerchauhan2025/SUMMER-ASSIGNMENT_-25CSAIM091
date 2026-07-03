#include <stdio.h>


int findMaximum(int num1, int num2) {
    
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int a, b, max;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    
    max = findMaximum(a, b);

    printf("max of  %d and %d is : %d" ,a,b,max );
    return 0;

}