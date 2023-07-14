#include <iostream>
#include <array>

int main() {
    std::array <int, 1085> myFirstArray;//<тип того, что в ячейках, количество ячеек> имя переменной типа array
    myFirstArray [0] = 34;//в квадратных скобках указан индекс, нумерация с 0
    std::cout << myFirstArray [0] << "\n";


    return 0;
}