#include <stdio.h>

int main() {
    int s, a, b, c, d;
    scanf("%d", &s);

    a = s % 10;
    b = s / 10 % 10;
    c = s / 100 % 10;
    d = s / 1000;

    if (a == b || b == c || c == d) {
        printf("Bad");
    } else {
        printf("Good");
    }
    return 0;
}
