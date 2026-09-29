#include <iostream>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    // 1. Проверяем, что k не больше всей шоколадки
    // 2. И что k делится без остатка на n ИЛИ на m
    if (k <= n * m && (k % n == 0 || k % m == 0)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
