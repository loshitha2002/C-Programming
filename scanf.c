#include <stdio.h>
int main(){
    int x;
    char y;

    printf("Enter a number: ");
    scanf("%d", &x); // user input integer
    printf("You entered: %d\n", x);

    printf("Enter a character: ");
    scanf(" %c", &y); // space before %c skips newline
    printf("You entered: %c\n", y);

    return 0;
}
