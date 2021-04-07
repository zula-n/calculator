#include <stdio.h>
#include "math.h"

int main() {
    char operation;
    do {
        float  first, second;
        printf ("\nEnter a function:");
        scanf("%f %c %f", &first, &operation, &second);

        switch (operation) {
            float answer;
            case '+':
                answer = add(first, second);
                printf("Result: %.2f", answer);
                break;
            case '-':
                answer = subtract(first, second);
                printf("Result: %.2f", answer);
                break;
            case '*':
                answer = multiply(first, second);
                printf("Result: %.2f", answer);
                break;
            case '/':
                answer = divide(first, second);
                printf("Result: %.2f", answer);
                break;
            case '^':
                answer = power(first,second);
                printf("Result: %.2f", answer);
                break;
            case '$':
                answer = recursivePower(first, second);
                printf("Result: %.2f", answer);
                break;
            default:
                printf("Error! operator is not correct");
        }
    }while(1);
}




