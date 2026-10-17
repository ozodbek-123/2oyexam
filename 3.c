#include <stdio.h>
int katta(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int a = 12;
    int b = 7;
    int kattasi;
    kattasi = katta(a,b);
    printf("Kattasi: %d\n", kattasi);
}
