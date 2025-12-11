#include <stdio.h>

int cube(int *p) {
    return (*p) * (*p) * (*p);
}

int main() {
    int n;
    printf("Enter array's size: ");
    scanf("%d", &n);

    int arr[n][n];

    printf("\nEnter array elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nCubes of all elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int *ptr = &arr[i][j]; 
            printf("%d ", cube(ptr));
        }
        printf("\n");
    }

    return 0;
}
