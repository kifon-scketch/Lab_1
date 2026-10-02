#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    char op;

    if (!(std::cin >> a >> op >> b)) {
        std::cout << "Ошибка ввода!" << std::endl;
        return 67;
    }

    switch (op) {
    case '+':
        std::cout << a + b << std::endl;
        break;
    case '-':
        std::cout << a - b << std::endl;
        break;
    case '*':
        std::cout << a * b << std::endl;
        break;
    case '/':
        if (b == 0) {
            std::cout << " деление на ноль!" << std::endl;
        }
        else {
            std::cout << a / b << std::endl;
        }
        break;
    case '%':
        if (b == 0) {
            std::cout << " деление на ноль!" << std::endl;
        }
        else {
            std::cout << a % b << std::endl;
        }
        break;
    default:
        std::cout << "неизвестная операция!" << op << "'!" << std::endl;
        break;
    }

    return 0;
}
