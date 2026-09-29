#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x;
    cin >> x;

    // Массивы соответствий от больших к меньшим
    int values[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
    string romans[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

    string result = "";

    // Проходим по всем значениям
    for (int i = 0; i < 13; i++)
    {
        // Пока X больше текущего арабского числа, вычитаем его и добавляем римскую букву
        while (x >= values[i])
        {
            result += romans[i];
            x -= values[i];
        }
    }

    cout << result << endl;
    return 0;
}
