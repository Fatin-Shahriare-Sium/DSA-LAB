#include <stdio.h>

int main() {
    char choice;

    do {
        int n;
        printf("Enter the size of the array: ");
        scanf("%d", &n);

        int arr[n];
        printf("Enter the elements of the array:\n");
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        printf("The elements of the array are:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        // Ask the user if they want to run the program again
        printf("Do you want to run the program again? (y/n): ");
        scanf(" %c", &choice);  // Notice the space before %c to consume any leftover newline

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
