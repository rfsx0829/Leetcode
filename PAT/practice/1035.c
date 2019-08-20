#include<stdio.h>
#include<string.h>

int main () {
    char s[1001];
    int n, a, b, c;
    char *p;

    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%s", &s);
        if (!strcmp(s, "PAT")) {
            printf("YES\n");
            continue;
        }
        
        a = b = c = 0;
        p = s;
        while (*p == 'A') {
            a++;
            p++;
        }
        if (*p == 'P') {
            p++;
            while (*p == 'A') {
                b++;
                p++;
            }
            if (*p=='T') {
                p++;
                while (*p == 'A') {
                    c++;
                    p++;
                }
                if (!(*p) && b > 0 && c == a * b) {
                    printf("YES\n");
                    continue;
                }
            }
        }
        printf("NO\n");
    }
    return 0;
}
