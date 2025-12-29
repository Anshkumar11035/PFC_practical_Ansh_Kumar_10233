#include <stdio.h>

int main(){
    int r, c, a[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);

    printf("Enter elements:\n");
    for(int i = 0; i < r;i++)
        for(int j = 0; j < c;j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < r;i++){
        int sum = 0;
        for(int j = 0; j < c; j++)
            sum += a[i][j];

        printf("Sum of row %d = %d\n", i + 1,sum);
    }

    return 0;
}

// Sample Input and Output:
// Enter rows and columns: 3 3
// Enter elements:
// 1 2 3
// 4 5 6
// 7 8 9
// Sum of row 1 = 6
// Sum of row 2 = 15
// Sum of row 3 = 24