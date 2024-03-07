#include <stdio.h>
#include <ctype.h>

int main() {
    char input[100];
    int uppercase = 0, lowercase = 0, digits = 0, others = 0;
    int i;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    for (i = 0; input[i] != '\0'; i++) {
        if (isupper(input[i]))
            uppercase++;
        else if (islower(input[i]))
            lowercase++;
        else if (isdigit(input[i]))
            digits++;
        else
            others++;
    }

    printf("Uppercase letters: %d\n", uppercase);
    printf("Lowercase letters: %d\n", lowercase);
    printf("Digits: %d\n", digits);
    printf("Other characters: %d\n", others);

    return 0;
}
