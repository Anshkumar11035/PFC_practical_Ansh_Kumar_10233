#include <stdio.h>

int main() {

    int n, arr[100], sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)

        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0)
            sum += arr[i];
    }
    printf("Sum of even elements = %d", sum);

    return 0;
}

// Sample Input/Output:

// Enter size of array: 6

// Enter elements:

// 1 2 3 4 5 6

// Sum of even elements = 12