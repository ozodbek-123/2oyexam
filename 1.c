#include <stdio.h>

int main() {
    int son[5];
    for(int i=0; i<5; i++) {
        scanf("%d", &son[i]);
        
    }
    
    int yig = 0; 
    for(int i = 0; i < 5; i++) {
        yig += son[i]; 
    }
    

    printf("%d\n", yig); 
}
