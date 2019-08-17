#include <stdio.h>

typedef struct {
    int sub;
    int dem;
} praction;

void printPraction(praction);
void add(praction, praction, praction* res);
void sub(praction, praction, praction* res);
void mul(praction, praction, praction* res);
void div(praction, praction, praction* res);
int gcd(int, int);

int main() {
    praction p1, p2, res;
    char operation;
    
    while(scanf("%d/%d %d/%d %c", &p1.sub, &p1.dem, &p2.sub, &p2.dem, &operation) == 5) {
        switch (operation) {
            case '+':
                add(p1, p2, &res);
                break;
            case '-':
                sub(p1, p2, &res);
                break;
            case '*':
                mul(p1, p2, &res);
                break;
            case '/':
                div(p1, p2, &res);
                break;
            default:
                printf("Bad operation\n");
        }

        int g = gcd(res.sub, res.dem);
        res.sub /= g;
        res.dem /= g;
        
        printPraction(res);
    }

    return 0;
}

void add(praction a, praction b, praction* res) {
    if (a.dem == b.dem) {
        res -> sub = a.sub + b.sub;
        res -> dem = a.dem;
    } else {
        res -> dem = a.dem * b.dem / gcd(a.dem, b.dem);
        res -> sub = a.sub * (res -> dem / a.dem) + b.sub * (res -> dem / b.dem);
    }
}

void sub(praction a, praction b, praction* res) {
    if (a.dem == b.dem) {
        res -> sub = a.sub - b.sub;
        res -> dem = a.dem;
    } else {
        res -> dem = a.dem * b.dem / gcd(a.dem, b.dem);
        res -> sub = a.sub * (res -> dem / a.dem) - b.sub * (res -> dem / b.dem);
    }
}

void mul(praction a, praction b, praction* res) {
    res -> sub = a.sub * b.sub;
    res -> dem = a.dem * b.dem;
}

void div(praction a, praction b, praction* res) {
    res -> sub = a.sub * b.dem;
    res -> dem = a.dem * b.sub;
}

void printPraction(praction prac) {
    if ((prac.sub < 0 && prac.dem > 0) || (prac.sub > 0 && prac.dem < 0)) {
        printf("-");
    }

    printf("%d/%d\n", prac.sub > 0 ? prac.sub : -prac.sub, prac.dem > 0 ? prac.dem : -prac.dem);
}

int gcd(int a, int b) {
    return b ? gcd(b, a%b) : a;
}
