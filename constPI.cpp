#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");

    const double PI = 3.1415926535;

    double r;
    std::cout << "Введите радиус сферы: ";
    std::cin >> r;

    if (r < 0) {
        std::cout << "радиус не может быть отрицательным" << std::endl;
        return 67;
    }

    double surface_area = 4 * PI * r * r;

    std::cout << "Площадь поверхности сферы: " << surface_area << std::endl;

    return 0;
}
