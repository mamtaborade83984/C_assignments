#include <stdio.h>
#include <ctype.h>

#define ALPHABET_SIZE 26

void countAlphabets(const char *str, int *count) {
    while (*str) {
        if (isalpha(*str)) {
            *str == tolower(*str); // convert character to lowercase
            count[*str - 'a']++;
        }
        str++;
    }
}

int main() {
    char str[100];
    int count[ALPHABET_SIZE] = {0}; // Initialize count array with zeros

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countAlphabets(str, count);

    printf("Occurrences of each alphabet in the string:\n");
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", 'a' + i, count[i]);
        }
    }

    return 0;
}
