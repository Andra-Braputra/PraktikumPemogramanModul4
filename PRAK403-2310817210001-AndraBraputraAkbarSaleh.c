#include <stdio.h>

int main() {
    int i, a, b;

    scanf("%d %d", &a, &b);

    if (a < b) {
        for (i = a; i <= b; i++) {
            printf("%d %d - ", i, b - i + a);
        } 
    } else {
        for (i = a; i >= b; i--) {
            printf("%d %d - ", i, a - i + b);
        } 
    }
    return 0;
}