#include <iostream>
#include <vector>
#include <string>

// Функция вывода содержимого вектора с помощью range-based for-loop
void printVectorRange(const std::vector<std::string>& names, const std::vector<int>& grades) {
    std::cout << "Содержимое векторов (с помощью range-based for-loop):\n";
    for (const std::string& name : names) {
        std::cout << "Имя: " << name << "\n";
    }
    for (int grade : grades) {
        std::cout << "Оценка: " << grade << "\n";
    }
    std::cout << "\n";
}

// Функция вывода содержимого вектора с помощью итератора
void printVectorIterator(const std::vector<std::string>& names, const std::vector<int>& grades) {
    std::cout << "Содержимое векторов (с помощью итератора):\n";
    for (std::vector<std::string>::const_iterator it = names.begin(); it != names.end(); ++it) {
        std::cout << "Имя: " << *it << "\n";
    }
    for (std::vector<int>::const_iterator it = grades.begin(); it != grades.end(); ++it) {
        std::cout << "Оценка: " << *it << "\n";
    }
    std::cout << "\n";
}

// Функция вывода содержимого вектора с помощью индексового цикла
void printVectorIndex(const std::vector<std::string>& names, const std::vector<int>& grades) {
    std::cout << "Содержимое векторов (с помощью индексового цикла):\n";
    for (size_t i = 0; i < names.size(); ++i) {
        std::cout << "Имя: " << names[i] << "\n";
    }
    for (size_t i = 0; i < grades.size(); ++i) {
        std::cout << "Оценка: " << grades[i] << "\n";
    }
    std::cout << "\n";
}

int main() {
    std::vector<std::string> names = {"Иван", "Мария", "Алексей"};
    std::vector<int> grades = {85, 92, 77};

//меняй значения
    printVectorRange(names, grades);
    //printVectorIterator(names, grades);
    //printVectorIndex(names, grades);

    return 0;
}
