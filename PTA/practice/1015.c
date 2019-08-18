#include <stdio.h>
#include <string.h>

int main() {
    char num[32] = {};
    int len = 0;

    while (scanf("%s", num) != EOF) {
        len = strlen(num);
        int res = 0;
        for (int i = 0; i < len; ++i) {
            res += (num[i]-'0') * ((1 << (len - i)) - 1);
        }
        printf("%d\n", res);
    }
    
    return 0;
}
