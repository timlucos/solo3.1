#include <iostream>
#include <vector>

void printVectorRange(const std::vector<int>& vec) {
    std::cout << "Содержимое вектора (Range-based for-loop): ";
    for (const auto& element : vec) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}



int main() {
    // Инициализация векторов
    std::vector<int> vector1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


    // Вывод дефолтных входных значений
    std::cout << "Дефолтные входные значения:" << std::endl;
    printVectorRange(vector1);
 
    return 0;
}
