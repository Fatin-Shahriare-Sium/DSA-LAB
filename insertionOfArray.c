//i want to insert an element in an array at a specific position
#include <stdio.h>
int main() {
    char choice;

    do {
        int n, pos, element;
        printf("Enter the size of the array: ");
        scanf("%d", &n);

        int arr[n + 1]; // Create an array with one extra space for insertion
        printf("Enter the elements of the array:\n");
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        printf("Enter the position to insert the new element (1 to %d): ", n);
        scanf("%d", &pos);
        
        if (pos < 0 || pos > n) {
            printf("Invalid position!\n");
            continue;
        }

        printf("Enter the element to insert: ");
        scanf("%d", &element);

        //Shift elements to the right to make space for the new element
        for (int i = n; i > pos-1; i--) {
            printf("Shifting element %d from position %d to position %d\n", arr[i - 1], i - 1, i);
            arr[i] = arr[i - 1];
        }

        // Insert the new element
        arr[pos-1] = element;

        // Print the updated array
        printf("The updated array is:\n");
        for (int i = 0; i <= n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        // Ask the user if they want to run the program again
        printf("Do you want to run the program again? (y/n): ");
        scanf(" %c", &choice);  // Notice the space before %c to consume any leftover newline

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

