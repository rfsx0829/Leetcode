#include <stdio.h>
#include <string.h>

int main() {
    char bytes[100] = { 0 };

    while (scanf("%s", bytes) != EOF) {
        int sum = 0, len = strlen(bytes);
        for (int i = 0; i < len; ++i) {
            sum += bytes[i] - '0';
        }

        if (!sum) {
            printf("ling\n");
            continue;
        }

        int d = 1000, flag = 0;
        while (d) {
            int x = sum / d;
            if ((x != 0) || flag) {
                flag = 1;
                switch (x) {
                    case 0: printf("ling"); break;
                    case 1: printf("yi"); break;
                    case 2: printf("er"); break;
                    case 3: printf("san"); break;
                    case 4: printf("si"); break;
                    case 5: printf("wu"); break;
                    case 6: printf("liu"); break;
                    case 7: printf("qi"); break;
                    case 8: printf("ba"); break;
                    case 9: printf("jiu"); break;
                }
                if (d != 1) {
                    printf(" ");
                }
            }
            sum = sum % d;
            d /= 10;
        }
    }

    return 0;
}
