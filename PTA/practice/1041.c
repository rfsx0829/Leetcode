#include <stdio.h>

int main() {
    char words[80] = { 0 };
    int cur = 0;
    
    while ((words[cur++] = getchar()) != '\n') {
    }

    for (int i = cur-1; i > -1; --i) {
        if (words[i] == ' ') {
            for (int j = i + 1; j < 80; ++j) {
                if (words[j] == '\n' || words[j] == ' ') {
                    break;
                }
                printf("%c", words[j]);
            }
            printf(" ");
        } else if (i == 0) {
            for (int j = i; j < 80; ++j) {
                if (words[j] == '\n' || words[j] == ' ') {
                    break;
                }
                printf("%c", words[j]);
            }
        }
    }

    printf("\n");

    return 0;
}
