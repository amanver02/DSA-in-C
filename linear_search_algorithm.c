#include<stdio.h>

int search(int arr[], int n, int search_id) {
    int i = 0;
    while (i < n && arr[i] != search_id) {
        i++;
    }
    if (i >= n) {
        return -1;
    } else {
        return i;
    }
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the Elements of array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int search_id;
    printf("Enter the search ID: ");
    scanf("%d", &search_id);

    int result = search(arr, n, search_id);
    if (result == -1) {
        printf("Not found\n");
    } else {
        printf("Found at index %d\n", result);
    }

    return 0;
}
