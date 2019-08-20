#include <stdio.h>

void Swap(int a[], int from, int end);

int main() {
    int M, N;
    scanf("%d", &N);
    scanf("%d", &M);

    int a[N];
    int m = M % N;
    for (int i = 0; i < N; ++i) {
        scanf("%d", a + i);
    }

    Swap(a, 0, N-1);
    Swap(a, 0, m-1);
    Swap(a, m, N-1);

    for (int i = 0; i < N - 1; ++i) {
        printf("%d ", a[i]);
    }
    printf("%d", a[N-1]);
}

void Swap(int a[], int from, int end) {
    while (from < end) {
        a[from] ^= a[end] ^= a[from] ^= a[end];
        from++;
        end--;
    }
}
