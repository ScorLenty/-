#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int A, B;
    char op;
    int result = 0;

    cout << "Введите значение для переменной A: ";
    cin >> A;
    cout << "Введите значение для переменной B: ";
    cin >> B;

    cout << "Введите 1 из знаков действия (+, -, *. /): " << endl;
    cin >> op;
    
    switch (op)
    {
    case '+':
        result = A + B;
        break;
    case '-':
        result = A - B;
        break;
    case '*':
        result = A * B;
        break;
    case '/':
        result = A / B;
        break;
    default:
        cout << "Вы ввели знак которого нет в списке предлагаемых знаков" << endl;
        return 1;
    }

    cout << "Результат выражения:" << result << endl;

    return 0;
}
