#include <iostream>
#include <string>
#include <Windows.h>
#include <iomanip>
#include <limits> // Библиотека для очистки буфера

void setupConsole() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}

// Новая функция для безопасного ввода чисел
double getDoubleInput(std::string prompt) {
    double value;
    while (true) {
        std::cout << prompt;
        if (std::cin >> value && value > 0) {
            return value; // Ввод корректен
        } else {
            std::cout << "Ошибка! Пожалуйста, введите положительное число (используйте точку для дробей)." << std::endl;
            std::cin.clear(); // Сброс состояния ошибки cin
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очистка буфера от "мусора"
        }
    }
}

void printRecommendation(double bmi, double height, double weight) {
    double idealWeight = 22.0 * (height * height);
    std::cout << "\n--- ОТЧЕТ ---" << std::endl;
    std::cout << "Ваш ИМТ: " << std::fixed << std::setprecision(2) << bmi << std::endl;
    std::cout << "Идеальный вес для вашего роста: " << idealWeight << " кг" << std::endl;

    if (bmi < 18.5) {
        std::cout << "Заключение: Дефицит массы. Нужно набрать: " << idealWeight - weight << " кг." << std::endl;
    } else if (bmi < 25) {
        std::cout << "Заключение: Норма. Вы в отличной форме!" << std::endl;
    } else {
        std::cout << "Заключение: Избыточный вес. Нужно сбросить: " << weight - idealWeight << " кг." << std::endl;
    }
}

int main() {
    setupConsole();
    
    while (true) {
        std::string name;
        std::cout << "\nВведите имя (или 'exit' для выхода): ";
        std::cin >> name;
        if (name == "exit" || name == "выход") break;

        // Используем нашу безопасную функцию вместо обычного cin
        double h = getDoubleInput("Введите рост в метрах (например, 1.75): ");
        double w = getDoubleInput("Введите вес в кг: ");

        double bmi = w / (h * h);
        printRecommendation(bmi, h, w);
    }

    return 0;
}