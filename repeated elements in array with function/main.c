#include <stdio.h>

void findRepeatedElements(int arr[], int size) {
    printf("Repeated elements in the array: ");

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;  // To avoid printing the same repeated element multiple times
            }
        }
    }
    printf("\n");
}

int main() {
    int size;

    // Get the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print repeated elements
    findRepeatedElements(arr, size);

    return 0;
}

