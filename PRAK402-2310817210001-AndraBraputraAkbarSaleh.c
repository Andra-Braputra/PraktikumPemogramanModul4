#include <stdio.h>

int main() {
    int i,a;
    scanf("%d",&a);
    for (i = 1; i <= a; i++) {
        if (i % 2 != 0) {
            printf ("%d ", i);
        }
    }

    printf("\n");

    for (i = a; i >= 1; i--) {
        if (i % 2 == 0) {
            printf ("%d ", i);
        }
    }
    return 0;
}