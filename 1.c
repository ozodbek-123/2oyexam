#include <stdio.h>

int main() {
    int son[5] = {2, 4, 6, 8, 10};
    int yig = 0; 

    for(int i = 0; i < 5; i++) {
        yig += son[i]; 
    }

    printf("%d\n", yig); 
}
