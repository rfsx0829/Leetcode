#include <iostream>

int main() {
    char ch = '0';
    int sum = 0;
    while (ch != '\n') {
        sum += ch - '0';
        ch = getchar();
    }

    int d = 1000, flag = 0;
    while (d) {
        int x = sum / d;
        if ((x != 0) || flag) {
            flag = 1;
            switch (x) {
                case 0: printf("zero"); break;
                case 1: printf("one"); break;
                case 2: printf("two"); break;
                case 3: printf("three"); break;
                case 4: printf("four"); break;
                case 5: printf("five"); break;
                case 6: printf("six"); break;
                case 7: printf("seven"); break;
                case 8: printf("eight"); break;
                case 9: printf("nine"); break;
            }
            if (d != 1) {
                printf(" ");
            }
        }
        sum = sum % d;
        d /= 10;
    }

    printf("\n");

    return 0;
}
