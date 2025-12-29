#include <stdio.h>

int main(){
    int n,arr[100];

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(int i = 0; i < n;i++)
        scanf("%d", &arr[i]);

    printf("Reversed array:\n");
    for(int i = n - 1; i >= 0;i--)
        printf("%d ", arr[i]);

    return 0;
}

// Sample Input/Output:

// Enter size of array: 5

// Enter elements:
// 1 2 3 4 5

// Reversed array:
// 5 4 3 2 1 