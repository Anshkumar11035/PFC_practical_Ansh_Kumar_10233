#include <stdio.h>

int main(){
    int n, arr[100],max,min;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n;i++)
        scanf("%d", &arr[i]);

    max = min = arr[0];

    for(int i = 1; i < n;i++){
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
// Sample Input/Output:

// Enter size of array: 5
// Enter elements:
// 3 5 1 9 2
// Maximum = 9
// Minimum = 1
