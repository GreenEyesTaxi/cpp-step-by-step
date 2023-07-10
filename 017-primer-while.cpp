#include <iostream>
#include <string> //стандарстная библиотека под строки

int main() {
    
    std::string promt("Initial value");
    std::cout << "Enter yes!\n";
    std::cin >> promt;

    //const bool cond = false; //зачем-то создалии константу, которая всегда тру

    while (promt != std::string("yes")) { //в скобочках пишем условие (значение), которое нам должно вернуть тип bool, то есть тру или фолс
        std::cout << "Enter yes!\n";
        std::cin >> promt;
        
    
    }
    
    std::cout << "Good boy!\n";

    return 0;
}