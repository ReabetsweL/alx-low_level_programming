#include <unistd.h>

int main() {
    char str[] = "_putchar\n";
    int len = sizeof(str) / sizeof(char);

    for (int i = 0; i < len; i++) {
        _putchar(str[i]);
    }

    return 0;
}
