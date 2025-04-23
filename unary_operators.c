#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 15, d = 20;

    printf("%d\n", ++a); // Pre-increment a -> a becomes 6, prints 6
    printf("%d\n", --b); // Pre-decrement b -> b becomes 9, prints 9
    printf("%d\n", c--); // Post-decrement c -> prints 15, then c becomes 14
    printf("%d\n", d++); // Post-increment d -> prints 20, then d becomes 21

    return 0;
}
