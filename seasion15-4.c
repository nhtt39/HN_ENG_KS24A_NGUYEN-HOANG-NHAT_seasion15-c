#include <stdio.h>

int main() {
    char str[] = "bcdac";
    int count[256] = {0};
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        count[(int)str[i]]++;
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (count[(int)str[i]] != 0) {
            printf("%c: %d\n", str[i], count[(int)str[i]]);
            count[(int)str[i]] = 0;
        }
    }

    return 0;
}

