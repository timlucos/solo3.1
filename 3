#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

// Структура данных для хранения имени и оценки
struct Student {
    std::string name;
    int grade;
};

// Функция для вычисления среднего значения оценок
double calculateAverage(const std::vector<Student>& students) {
    int sum = 0;
    for (const auto& student : students) {
        sum += student.grade;
    }
    return static_cast<double>(sum) / students.size();
}

// Функция для вычисления медианы оценок
double calculateMedian(const std::vector<Student>& students) {
    std::vector<int> grades;
    for (const auto& student : students) {
        grades.push_back(student.grade);
    }
    std::sort(grades.begin(), grades.end());
    if (grades.size() % 2 == 0) {
        return (grades[grades.size() / 2 - 1] + grades[grades.size() / 2]) / 2.0;
    } else {
        return grades[grades.size() / 2];
    }
}

// Функция для вычисления моды оценок
std::vector<std::string> calculateMode(const std::vector<Student>& students) {
    std::map<int, int> gradeCount;
    for (const auto& student : students) {
        gradeCount[student.grade]++;
    }
    int maxCount = 0;
    for (const auto& pair : gradeCount) {
        maxCount = std::max(maxCount, pair.second);
    }
    std::vector<std::string> modeStudents;
    for (const auto& pair : gradeCount) {
        if (pair.second == maxCount) {
            modeStudents.push_back(students[pair.first].name);
        }
    }
    return modeStudents;
}

int main() {
    // Создание списка студентов
    std::vector<Student> students = {
        {"Alice", 90},
        {"Bob", 85},
        {"Charlie", 90},
        {"David", 80},
        {"Eve", 95},
        {"Frank", 85},
        {"Grace", 90},
        {"Henry", 80},
        {"Ivy", 85},
        {"Jack", 90}
    };

    // Вывод списка имен, оценка которых соответствует моде
    std::cout << "Студенты с оценкой, соответствующей моде:" << std::endl;
    std::vector<std::string> modeStudents = calculateMode(students);
    for (const auto& student : modeStudents) {
        std::cout << student << std::endl;
    }

    // Вычисление и вывод среднего значения оценок
    double average = calculateAverage(students);
    std::cout << "Среднее значение оценок: " << average << std::endl;

    // Вычисление и вывод медианы оценок
    double median = calculateMedian(students);
    std::cout << "Медиана оценок: " << median << std::endl;

    return 0;
}


//В данном примере создается список студентов с их именами и оценками. Затем, вызываются функции calculateMode, calculateAverage и calculateMedian для вычисления моды, среднего значения и медианы оценок соответственно. Результаты выводятся в консоль.

//Функция calculateMode использует std::map для подсчета количества оценок каждого значения. Затем, находится максимальное количество оценок и имена студентов, у которых оценка соответствует моде, добавляются в вектор modeStudents.
