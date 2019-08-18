#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
    int arr[20][20];
    int m, n, k;
    int all;
    int gotime, backtime, picktime = 1;
    int ipre, jpre;
    while (cin >> m >> n >> k) {
        int ia[501] = {}, ja[501] = {};
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> arr[i][j];
                if (arr[i][j] != 0) {
                    ia[arr[i][j]] = i + 1;
                    ja[arr[i][j]] = j + 1;
                }
            }
        }
        all = 0;
        ipre = 0;
        jpre = 0;
        for (int num = 500; num > 0; --num) {
            if (ia[num] > 0 && ja[num] > 0) {
                if (ipre==0 && jpre==0) {
                    gotime = ia[num];
                    backtime = ia[num];
                } else {
                    gotime = abs(ipre-ia[num]) + abs(jpre-ja[num]);
                    backtime = ia[num];
                }
                ipre = ia[num];
                jpre = ja[num];
                if (k >= (gotime + backtime + picktime)) {
                    all += num;
                    k = k - (gotime + picktime);
                } else {
                    break;
                }
            }
        }   
        cout << all << endl;
    }
    return 0;
}
