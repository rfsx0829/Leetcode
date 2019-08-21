#include <iostream>

#define ABS(x) ((x) > 0 ? (x) : (-(x)))

long long int gcd(long long int, long long int);

int main() {
    int n;
    std::cin >> n;

    long long int a, b;
    scanf("%lld/%lld", &a, &b);

    for (int i = 0; i < n-1; ++i) {
        long long int temp_a, temp_b;
        scanf("%lld/%lld", &temp_a, &temp_b);
        if (b == temp_b) {
            a += temp_a;
        } else {
            long long int g = gcd(temp_b, b);
            a = a*(temp_b/g)+temp_a*(b/g);
            b *= temp_b/g;
        }

        long long int g = gcd(a, b);
        a /= g;
        b /= g;
    }

    if (a == 0) {
        std::cout << "0" << std::endl;
        return 0;
    }

    long long int m = a / b;
    if (m) {
        if (a-b*m == 0) {
            std::cout << m << std::endl;
            return 0;
        }
        if ((a > 0 && b < 0) || (a < 0 && b > 0)) {
            std::cout << m << " " << "-" << ABS(a-b*m) << "/" << ABS(b) << std::endl;
        } else {
            std::cout << m << " " << ABS(a - b*m) << "/" << ABS(b) << std::endl;
        }
    } else {
        if ((a > 0 && b < 0) || (a < 0 && b > 0)) {
            std::cout << "-" << ABS(a-b*m) << "/" << ABS(b) << std::endl;
        } else {
            std::cout << ABS(a-b*m) << "/" << ABS(b) << std::endl;
        }
    }

    return 0;
}

long long int gcd(long long int a, long long int b) {
    return b ? gcd(b, a%b) : a;
}
