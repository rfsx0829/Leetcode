#include<stdio.h>
#include<string.h>

int main () {
    int n, i, t, cnt, h[10000];

    for (; ~scanf("%d",&n); ) {
        for (memset(h, 0, sizeof(h)), i = 0; i < n && ~scanf("%d", &t); ++i) {
            if (h[t] == 0) {
                for (h[t] = 1; t != 1; t = (t%2 ? 3*t+1 : t) / 2, h[t] = -1) {}
            }
        }
        for (cnt = 0, i = 0; i < 101; h[i] <= 0 ? : ++cnt, ++i) {}
        for (i = 100; i > 0; h[i] <= 0 ? : printf(--cnt == 0 ? "%d\n" : "%d ", i), --i);
    }
}
