#include <stdio.h>

int main() {
    int n, m, flag = 1, count = 0;
    while (scanf("%d %d", &n, &m) != EOF) {
        if (m != 0) {
            if (flag) {
                printf("%d %d", n*m, m-1);
                flag = 0;
            } else {
                printf(" %d %d", n*m, m-1);
            }
            count++;
        } else if (count == 0) {
            printf("%d %d", 0, 0);
        }

        if (getchar() == '\n') {
            break;
        }
    }

    printf("\n");

    return 0;
}
