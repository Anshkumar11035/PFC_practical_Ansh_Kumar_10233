#include <stdio.h>


// Ansh kumar 10233

int main(){
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);
    for(int i = n;i >= 1; i--){
        for(int j = 0;j < n - i;j++)
            printf(" ");
        for(int j = 0;j< 2 * i - 1;j++)
            printf("*");
        printf("\n");
    }
    for (int i = 2; i <= n;i++){
        for(int j = 0; j < n - i;j++)
            printf(" ");
        for(int j = 0; j < 2 * i - 1;j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
// Enter value of n: 5
// *********
//  *******
//   *****
//    ***
//     *
//    ***
//   *****
//  *******
// *********

