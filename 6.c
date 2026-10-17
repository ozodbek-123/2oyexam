#include <stdio.h>


int hisoblash(int n) {
    
    if (n <= 1) {
        return n;
    }
    return n + hisoblash(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    
    int yigindi = hisoblash(n);
    printf("Yigindi: %d\n", yigindi);
}
