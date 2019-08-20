#include <iostream>

int isPrime(int);

int main() {
    int n, sum = 0, lastprime = 2;
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        if (isPrime(i)) {
            if (i - lastprime == 2) {
                sum++;
            }
            lastprime = i;
        }
    }
    std::cout << sum;
    return 0;
}

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }

    for(int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
