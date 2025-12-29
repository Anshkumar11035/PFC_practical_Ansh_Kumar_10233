#include <stdio.h>

// Ansh kumar 10233

int sumOfDigits(int n){
     int sum = 0;

    while (n > 0){
        sum = sum + (n % 10);
           n = n / 10;
    }

    return sum;
}

int main(){
    int n;

    printf("Enter a number: ");
      scanf("%d", &n);

    printf("Sum of digits = %d",sumOfDigits(n));
      return 0;
}
// Enter a number: 545
// Sum of digits = 14