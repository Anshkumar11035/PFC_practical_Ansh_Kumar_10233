#include <stdio.h>
// Ansh kumar 10233

int main(){
    for(int i = 1;i <= 4;i++){
        for(int j = 0;j < i;j++){
            printf("%c", 'A'+ j);
        }
        printf("\n");
    }
    return 0;
}
// A
// AB
// ABC
// ABCD