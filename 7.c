#include <stdio.h>
struct Talaba {
    char ism[50];
    int yosh;
    int ball;
};

int main() {
    struct Talaba t;
    printf("ism kiriting");
    scanf("%s", t.ism);
    printf("yosh kiriting");
    scanf("%d", &t.yosh);
    printf("ball kiritin");
    scanf("%d", &t.ball);
    printf("Ism: %s\n", t.ism);
    printf("Yosh: %d\n", t.yosh);
    printf("Ball: %d\n", t.ball);
}
