#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i, pos, choice;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray Operations:\n");
    printf("1. Insert an element\n");
    printf("2. Delete an element\n");
    printf("3. Display the array\n");
    printf("4. Exit\n");

    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the position to insert: ");
                scanf("%d", &pos);
                if (pos < 0 || pos > n) {
                    printf("Invalid position!\n");
                } else {
                    printf("Enter the element to insert: ");
                    int element;
                    scanf("%d", &element);

                    for (i = n - 1; i >= pos; i--) {
                        arr[i + 1] = arr[i];
                    }
                    arr[pos] = element;
                    n++;
                    printf("Element inserted successfully.\n");
                }
                break;

            case 2:
                printf("Enter the position to delete: ");
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Invalid position!\n");
                } else {
                    for (i = pos; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Element deleted successfully.\n");
                }
                break;

            case 3:
                printf("Array elements: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 4:
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
