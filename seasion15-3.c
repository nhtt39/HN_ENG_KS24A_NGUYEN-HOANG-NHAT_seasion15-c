#include <stdio.h>

int main() {
    char str[100] = "hello world";
    char ch;
    int i, j = 0;

    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }

    str[j] = '\0';

    printf("Chuoi sau khi xoa: %s\n", str);

    return 0;
}

