//задание: вывести на экран все нечетные числа от 3 до 48

#include <iostream>

int main(){
    
    for (int i = 3; i < 48; i=i+2) {
        std::cout << i << " " /*<< std::endl*/;
    }
    
    
    return 0;
}