#include <stdio.h>

  int linear_search(int arr[], int size, int target) {
     for (int i = 0; i < size; i++) {
         if (arr[i] == target) {
            return i;  // Return the index of the target element if found
        }
    }
    return -1;  // Re turn -1 if the target element is not in the array
}

int main() {
    int myArray[] = {2, 4, 6, 8, 10, 12, 14};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);
    int targetElement = 8;

    int result = linear_search(myArray, arraySize, targetElement);

    if (result != -1) {
        printf("Target element %d found at index %d.\n", targetElement, result);
    } else {
        printf("Target element %d not found in the array.\n", targetElement);
    }

    return 0;
}
