//element search of an array
#include <stdio.h>
int main() {
    char choice;

    do {
        int n, element, found = 0;
        printf("Enter the size of the array: ");
        scanf("%d", &n);

        int arr[n];
        printf("Enter the elements of the array:\n");
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        printf("Enter the element to search for: ");
        scanf("%d", &element);

        // Search for the element in the array
        for (int i = 0; i < n; i++) {
            if (arr[i] == element) {
                printf("Element %d found at position %d\n", element, i + 1);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("Element %d not found in the array.\n", element);
        }

        // Ask the user if they want to run the program again
        printf("Do you want to run the program again? (y/n): ");
        scanf(" %c", &choice);  // Notice the space before %c to consume any leftover newline

    } while (choice == 'y' || choice == 'Y');

    return 0;
}