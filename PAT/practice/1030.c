#include <stdio.h>

int main() {
    int ch;
    while ((ch = getchar()) != EOF) {
        if (ch >= 'A') {
            ch = ch > 'E' ? (ch - 5) : (ch + 21);
        }
        putchar(ch);
    }
    return 0;
}
