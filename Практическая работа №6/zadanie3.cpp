#include <iostream>
#include <string>

int main() {
    // Ускорение ввода-вывода
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int x, n;
    if (!(std::cin >> x >> n)) return 0;

    // Переводим начальное число в строку
    std::string current = std::to_string(x);

    // Делаем N-1 итераций, чтобы получить N-ую строку
    for (int step = 1; step < n; ++step) {
        std::string next_str = "";
        int len = current.length();

        int count = 1;
        for (int i = 1; i < len; ++i) {
            if (current[i] == current[i - 1]) {
                count++;
            }
            else {
                next_str += std::to_string(count) + current[i - 1];
                count = 1;
            }
        }
        // Дозаписываем последнюю группу цифр
        next_str += std::to_string(count) + current[len - 1];
        current = next_str;
    }

    // Выводим полученную N-ую строку
    std::cout << current << "\n";

    return 0;
}
