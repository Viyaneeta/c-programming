#include <stdio.h>
int main(){
int i = 0, j = 0;
    for (int i = 0; i < 5; i++) {
 
        printf("i = %d, j = ", i);
 
        for (int j = 0; j < 5; j++) {
            if (j == 2)
                break;
 
            printf("%d ", j);
        }
 
        printf("\n");
    }
 
    return 0;
}