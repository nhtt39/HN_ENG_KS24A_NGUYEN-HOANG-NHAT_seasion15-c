#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (i == 0 || (str[i-1] == ' ')) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 'a' + 'A';  
            }
        }
    }

    printf("Chuoi sau khi chuyen hoa: %s", str);

    return 0;
}

