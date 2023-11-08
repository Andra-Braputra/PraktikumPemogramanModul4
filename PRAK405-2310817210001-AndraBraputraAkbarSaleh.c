#include <stdio.h>

int main() {
    int i, j, a, b, c, total = 0, total2 = 0;

    scanf("%d %d", &a, &b);

        for (i = 1; i <= a; i++) {
        c = i * b;
        printf("(");
        for (j = i; j >= 1; j--) {
            printf("%d * %d", j, b);
            if (j != 1) {
                printf(") + (");

            }
        }
        total += c;
        printf(") = %d\n", total);
        total2 +=total;
        }
        printf("%d\n", total2);   
    return 0;
}