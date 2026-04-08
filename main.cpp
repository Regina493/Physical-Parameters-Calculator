#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <windows.h>

void setupConsole() {
    // Установка кодировки для вывода кириллицы
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
}

double getDoubleInput(std::string prompt) {
    double value;
    while (true) {
        std::cout << prompt;
        if (std::cin >> value && value > 0) {
            return value;
        } else {
            std::cout << "Ошибка! Введите положительное число." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}

void printRecommendation(double bmi, double height, double weight) {
    double idealWeight = 22.0 * (height * height);
    std::cout << "\n--- ОТЧЕТ ---" << std::endl;
    std::cout << "Ваш ИМТ: " << std::fixed << std::setprecision(2) << bmi << std::endl;
    std::cout << "Идеальный вес для вашего роста: " << idealWeight << " кг" << std::endl;

    if (bmi < 18.5) {
        std::cout << "Заключение: Дефицит массы. Нужно набрать: " << (idealWeight - weight) << " кг" << std::endl;
    } else if (bmi <= 25) {
        std::cout << "Заключение: Норма. Вы в отличной форме!" << std::endl;
    } else {
        std::cout << "Заключение: Избыточный вес. Нужно сбросить: " << (weight - idealWeight) << " кг" << std::endl;
    }
}

int main() {
    setupConsole();
    std::string name;

    while (true) {
        std::cout << "\nВведите имя (или 'выход' для завершения): ";
        std::cin >> name;

        if (name == "выход" || name == "exit") {
            break;
        }

        double weight = getDoubleInput("Введите вес (кг): ");
        double height = getDoubleInput("Введите рост (в метрах, например 1.75): ");

        double bmi = weight / (height * height);
        printRecommendation(bmi, height, weight);
    }

    return 0;
}
    
    