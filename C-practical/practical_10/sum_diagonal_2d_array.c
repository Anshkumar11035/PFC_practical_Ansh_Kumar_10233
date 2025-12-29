#include <stdio.h>

int main() {
    int n, arr[10][10], sum = 0;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        sum += arr[i][i];
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}

// Sample Input and Output:
// Enter order of matrix: 3

// Enter elements:
// 1 5 6
// 4 8 3
// 2 4 6

// Sum of diagonal elements = 15








