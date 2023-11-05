#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

// Функция для подсчета моды
std::vector<int> calculateMode(const std::vector<int>& grades) {
    std::unordered_map<int, int> countMap;
    std::vector<int> mode;

    // Подсчет количества каждого элемента
    for (int grade : grades) {
        countMap[grade]++;
    }

    // Поиск наиболее часто встречающегося элемента (моды)
    int maxCount = 0;
    for (const auto& pair : countMap) {
        if (pair.second > maxCount) {
         maxCount = pair.second;
            mode.clear();
            mode.push_back(pair.first);
        } else if (pair.second == maxCount) {
            mode.push_back(pair.first);
        }
    }

    return mode;
}

int main() {
    std::vector<std::string> names;
    std::vector<int> grades;

    int choice;
    do {
        std::cout << "1. Добавить студента" << std::endl;
        std::cout << "2. Вывести список студентов" << std::endl;
        std::cout << "3. Подсчитать моду оценок" << std::endl;
        std::cout << "0. Выйти" << std::endl;
        std::cout << "Выберите действие: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string name;
                int grade;

                std::cout << "Введите имя студента: ";
                std::cin >> name;
                names.push_back(name);

                std::cout << "Введите оценку студента (0-100): ";
                std::cin >> grade;
                grades.push_back(grade);

                std::cout << "Студент добавлен." << std::endl;
                break;
            }
            case 2: {
                if (names.empty()) {
                    std::cout << "Список студентов пуст." << std::endl;
                } else {
                    std::cout << "Список студентов:" << std::endl;
                    for (size_t i = 0; i < names.size(); i++) {
                        std::cout << names[i] << ": " << grades[i] << std::endl;
                    }
                }
                break;
            }
            case 3: {
                if (grades.empty()) {
                    std::cout << "Список оценок пуст." << std::endl;
                } else {
                    std::vector<int> mode = calculateMode(grades);
                    std::cout << "Мода оценок: ";
                    for (int grade : mode) {
                        std::cout << grade << " ";
                    }
                    std::cout << std::endl;
                }
                break;
            }
            case 0: {
                std::cout << "Выход из программы." << std::endl;
                break;
            }
            default: {
                std::cout << "Некорректный выбор. Повторите попытку." << std::endl;
            }
        }
    } while (choice != 0);

    return 0;
}
