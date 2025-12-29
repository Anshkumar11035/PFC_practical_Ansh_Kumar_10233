#include <stdio.h>

// Ansh kumar 10233

 //Sum of even number using continue;
 
int main(){
    int n, sum = 0;

    printf("Enter the limit: ");
    scanf("%d", &n);

    for(int i = 1; i <= n;i++){
        if (i%2 != 0)
            continue;   // skips odd numbers
        sum = sum + i;
    }

    printf("Sum of even numbers = %d",sum);

    return 0;
}
// Enter the limit: 5
// Sum of even numbers = 6