#include <stdio.h>

int main() {
    int x=15;
    printf("son=");
    scanf("%d", &x); 
    int *ptr = &x;
    
    *ptr = 25;
    
    printf("Yangi qiymat: %d\n", x);
}


