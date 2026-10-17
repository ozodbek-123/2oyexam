#include <stdio.h>

int main() {
    char matn[100];
    scanf("%[^\n]", matn);
    FILE *f = fopen("matn.txt", "w");
    if (f == NULL) {
        printf("Faylni ochishda xatolik yuz berdi!\n");
        return 1;
    }
    fprintf(f, "%s", matn);
    fclose(f);
    printf("Matn faylga yozildi.\n");
}
