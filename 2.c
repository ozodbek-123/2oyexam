#include <stdio.h>

int main() {

    int son[2][3] = { {1,2,3},{4,5,6}};
    
    int yig = 0; 
    for (int i = 0; i < 2; i++) {
        for (int k = 0; k < 3; k++) {
            printf("%d ", son[i][k]); 
            yig +=son[i][k];   
        }
        printf("\n");
    }
     printf("Yigindi: %d\n", yig);
}
