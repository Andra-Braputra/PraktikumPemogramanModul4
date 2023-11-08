#include <stdio.h>

int main() {
    int i,a;
    char b;
    scanf("%d %c",&a, &b);
    for (i = 1; i <= 50; i++) {
        if (i % a == 0) {
            printf("%c ", b);
        } else {
            printf("%d ", i);
        }
        if (i % 10 == 0) {
            printf("\n");
        }
    }
    return 0;
}