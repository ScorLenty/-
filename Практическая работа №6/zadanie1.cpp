#include <iostream>
#include <vector>
#include <string>

int main() {
    // Ускорение ввода-вывода
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    if (!(std::cin >> N)) return 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i + j < N - 1) {
                std::cout << 0;
            }
            else if (i + j == N - 1) {
                std::cout << 1;
            }
            else {
                std::cout << 2;
            }

            // Выводим пробел между числами, но не в конце строки
            if (j < N - 1) {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }

    return 0;
}