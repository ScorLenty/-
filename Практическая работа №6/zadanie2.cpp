#include <iostream>
#include <vector>

int main() {
    // Ускорение ввода-вывода
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, M, W;
    if (!(std::cin >> N >> M >> W)) return 0;

    // Создаем сетку поля. Изначально везде 0.
    // Используем размер (N + 2) x (M + 2), чтобы не проверять границы массива (padding)
    std::vector<std::vector<int>> grid(N + 2, std::vector<int>(M + 2, 0));
    // Отдельный массив-маска для грибов (-1 означает, что здесь гриб)
    std::vector<std::vector<int>> field(N + 2, std::vector<int>(M + 2, 0));

    for (int i = 0; i < W; ++i) {
        int r, c;
        std::cin >> r >> c;
        field[r][c] = -1; // Отмечаем гриб
    }

    // Обходим все ячейки и считаем грибы вокруг
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            if (field[i][j] == -1) {
                continue;
            }

            int count = 0;
            // Проверяем 8 соседних ячеек
            for (int di = -1; di <= 1; ++di) {
                for (int dj = -1; dj <= 1; ++dj) {
                    if (field[i + di][j + dj] == -1) {
                        count++;
                    }
                }
            }
            grid[i][j] = count;
        }
    }

    // Вывод результата
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            if (field[i][j] == -1) {
                std::cout << '*';
            }
            else {
                std::cout << grid[i][j];
            }
        }
        std::cout << "\n";
    }

    return 0;
}