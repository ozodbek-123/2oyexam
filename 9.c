#include <stdio.h>
int engKattaTop(int m[3][3]) {
    int max = m[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (m[i][j] > max) {
                max = m[i][j];
            }
        }
    }
    return max;
}

int main() {
    int matritsa[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matritsa[i][j]);
        }
    }
    printf("Matritsa:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matritsa[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int maxElement = engKattaTop(matritsa);
    printf("Eng katta element: %d\n", maxElement);
    for (int i = 0; i < 3; i++) {
        int satrYigindi = 0;
        for (int j = 0; j < 3; j++) {
            satrYigindi += matritsa[i][j];
        }
        printf("%d-satr yig'indisi: %d\n", i + 1, satrYigindi);
    }
    
    return 0;
}
