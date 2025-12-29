#include <stdio.h>

int main(){
    int r, c,max,min;

    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);
int arr[r][c];

    printf("Enter elements:\n");
    for(int i = 0; i < r;i++){
        for(int j = 0; j < c;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    max = min = arr[0][0];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c;j++){
            if(arr[i][j] > max)
                max = arr[i][j];
            if(arr[i][j] < min)
                min = arr[i][j];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}

// Sample Input and Output:

// Enter rows and columns: 3 3
// Enter elements:
// 4 5 3
// 2 4 9
// 2 9 6
// Maximum element = 9
// Minimum element = 2









