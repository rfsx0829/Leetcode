#include <iostream>

using namespace std;

const char* toPinYin(int num);
void prtNumber(int number);

int main() {
    int number;
    cin >> number;

    if (number < 0) {
        cout << "Fu ";
        number = -number;
    } else if (number == 0) {
        cout << "ling" << endl;
        return 0;
    }

    int sub_a = number / 10000;
    int sub_b = number % 10000;

    if (sub_a > 9999) {
        cout << toPinYin(sub_a / 10000) << " Yi";
        sub_a %= 10000;
        if (sub_a) {
            cout << " ";
        } else if (!sub_b) {
            return 0;
        } else {
            cout << " ling ";
        }
    }

    if (sub_a) {
        prtNumber(sub_a);
        cout << " Wan";
        if (sub_b) {
            cout << " ";
        } else {
            return 0;
        }

        if (sub_b < 1000) {
            cout << "ling ";
        }
    }

    prtNumber(sub_b);

    cout << endl;

    return 0;
}

void prtNumber(int number) {
    int digit = 10000;
    int flag = 0, pre = 1;
    while (digit) {
        int num = number / digit;
        if (num || flag) {
            flag = 1;

            if (num) {
                cout << toPinYin(num);
                if (digit > 1) {
                    cout << " ";
                }
            } else {
                if (pre && number % digit) {
                    cout << toPinYin(num);
                    cout << " ";
                }
            }
            
            if (num) {
                switch (digit) {
                    case 1000: cout << "Qian"; break;
                    case 100: cout << "Bai"; break;
                    case 10: cout << "Shi"; break;
                }
                if (number % digit) {
                    cout << " ";
                }
            }
        }

        number %= digit;
        digit /= 10;
        pre = num;
    }
}

const char* toPinYin(int num) {
    switch (num) {
        case 0: return "ling";
        case 1: return "yi";
        case 2: return "er";
        case 3: return "san";
        case 4: return "si";
        case 5: return "wu";
        case 6: return "liu";
        case 7: return "qi";
        case 8: return "ba";
        case 9: return "jiu";
    }
    return "..";
}
