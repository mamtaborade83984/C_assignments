#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 5
#define MAX_LENGTH 50

int main() {
    char *strings[MAX_STRINGS] = {"cricket", "badminton", "footbal", "cricket", "volleyball"};

    printf("Duplicate strings:\n");

    for (int i = 0; i < MAX_STRINGS; i++) {
        for (int j = i + 1; j < MAX_STRINGS; j++) {
            if (strings[i] != NULL && strings[j] != NULL && strcmp(strings[i], strings[j]) == 0) {
                printf("%s\n", strings[i]);

                strings[j] = NULL;
            }
        }
    }

    return 0;
}

