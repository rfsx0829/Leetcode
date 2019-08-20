#include<stdio.h>

int isLeapYear(int);

int main() {
    char* L[7] = { "1 4 7\n", "9 12\n", "6\n", "3 11\n", "2 8\n", "5\n", "10\n" };
    char* C[7] = { "1 10\n", "4 7\n", "9 12\n", "6\n", "2 3 11\n", "8\n","5\n" };
    int n;

    while (scanf("%d", &n) != EOF) {
        int flag = isLeapYear(n);
        n = (6 + (n-2000) + (n-1997)/4 + (n-2001)/400 - (n-2001)/100) % 7;
        char* s;
        if (flag) {
            s = L[n];
        } else {
            s = C[n];
        }
        printf("%s", s);
    }

    return 0;
}

int isLeapYear(int n) {
    int rtn = 0;
    if (n%400==0 || (n%100!=0 && n%4==0)) {
        rtn = 1;
    }
    return rtn;
}