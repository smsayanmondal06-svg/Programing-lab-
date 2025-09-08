#include <stdio.h>

int main() {
    int choice;

    printf("Choose a data type to find its size:\n");
    printf("1. int\n");
    printf("2. char\n");
    printf("3. float\n");
    printf("4. double\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Size of int: %zu bytes\n", sizeof(int));
    } 
    else if (choice == 2) {
        printf("Size of char: %zu bytes\n", sizeof(char));
    } 
    else if (choice == 3) {
        printf("Size of float: %zu bytes\n", sizeof(float));
    } 
    else if (choice == 4) {
        printf("Size of double: %zu bytes\n", sizeof(double));
    } 
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
