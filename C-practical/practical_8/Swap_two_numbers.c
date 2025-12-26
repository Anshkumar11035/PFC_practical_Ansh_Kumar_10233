#include <stdio.h>

// Ansh kumar 10233


void swap(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
      int x, y;

    printf("Enter two x and y: ");
      scanf("%d %d",&x, &y);

     swap(&x, &y);

    printf("After swapping:\n");
      printf("x = %d, y = %d", x,y);
    return 0;
}
// Enter two x and y: 15 20
// After swapping:
// x = 20, y = 15