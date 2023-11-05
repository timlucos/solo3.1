#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <2.h>
#include <3.h>
using namespace std;

// Функция для инициализации вектора имен демонстрационными значениями
void initNamesDemo(vector<string>& names) {
    names = { "Alice", "Bob", "Charlie", "David", "Emma", "Frank", "Grace", "Henry", "Ivy", "Jack" };
}

// Функция для инициализации вектора оценок демонстрационными значениями
void initGradesDemo(vector<int>& grades) {
    grades = { 85, 77, 92, 65, 88, 79, 91, 73, 84, 90 };
}

// Функция для инициализации вектора имен случайными значениями
void initNamesRandom(vector<string>& names, int size) {
    vector<string> randomNames = { "John", "Kate", "Liam", "Olivia", "Noah", "Mia", "William", "Ava", "James", "Sophia" };
    srand(time(0));
    for (int i = 0; i < size; i++) {
        int randomIndex = rand() % randomNames.size();
        names.push_back(randomNames[randomIndex]);
    }
}

// Функция для инициализации вектора оценок случайными значениями
void initGradesRandom(vector<int>& grades, int size) {
    srand(time(0));
    for (int i = 0; i < size; i++) {
        int randomGrade = rand() % 101;
        grades.push_back(randomGrade);
    }
}

// Функция для инициализации вектора имен значениями, введенными пользователем
void initNamesUser(vector<string>& names, int size) {
    cout << "Введите " << size << " имен(и) студента(ов):" << endl;
    for (int i = 0; i < size; i++) {
        string name;
        cin >> name;
        names.push_back(name);
    }
}

// Функция для инициализации вектора оценок значениями, введенными пользователем
void initGradesUser(vector<int>& grades, int size) {
    cout << "Введите " << size << " оценок (0-100):" << endl;
    for (int i = 0; i < size; i++) {
        int grade;
        cin >> grade;
        grades.push_back(grade);
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    vector<string> names;
    vector<int> grades;

    int choice;
    cout << "Выберите вариант инициализации векторов:" << endl;
    cout << "1. Демонстрационные значения" << endl;
    cout << "2. Случайные значения" << endl;
    cout << "3. Значения, введенные пользователем" << endl;
    cin >> choice;

    int size;
    switch (choice) {
    case 1:
        initNamesDemo(names);
        initGradesDemo(grades);
        break;
    case 2:
        cout << "Введите желаемый размер выборки: ";
        cin >> size;
        initNamesRandom(names, size);
        initGradesRandom(grades, size);
        break;
    case 3:
        cout << "Введите желаемый размер выборки: ";
        cin >> size;
        initNamesUser(names, size);
        initGradesUser(grades, size);
        break;
    default:
        cout << "Некорректный выбор" << endl;
        return 0;
    }

    // Вывод имен и оценок
    cout << "Имена и оценки студентов:" << endl;
    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << ": " << grades[i] << " баллов" << endl;
    }

    return 0;
}
