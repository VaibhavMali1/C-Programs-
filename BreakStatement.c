#include <stdio.h>

 int main() {
 
    for (int i = 0; i < 5; i++) {
        for (int j = 1; j <= 8; j++) {

            if (j > 4) 
                break;
            else
                printf("1");
        }
        printf("\n");
    }
   
    return 0;
}