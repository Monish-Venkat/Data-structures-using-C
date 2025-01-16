#include<stdio.h>

int bs(int a[], int key, int low, int high) {
    int mid;
    if (low <= high) {
        mid = (low + high) / 2;
        if (key == a[mid])
            return mid;
        else if (key > a[mid])
            return bs(a, key, mid + 1, high);
        else
            return bs(a, key, low, mid - 1);
    } else {
        return -1;
    }
}

void main() {
    int n, key, index;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n]; // Dynamic array based on input size
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    index = bs(a, key, 0, n - 1);
    if (index == -1)
        printf("Element is not found.");
    else
        printf("Element is found at position: %d", index + 1);
}
