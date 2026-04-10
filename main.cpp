#include <iostream>
#include <string>
#include <cmath>     // Для расчета ИМТ: вес / (рост * рост)
#include <iomanip>   // Для фиксации знаков после запятой
#include <limits>    // Для очистки буфера терминала
#include <windows.h> // Для работы с кодировкой UTF-8 в Windows

using namespace std;

// Функция для безопасного ввода чисел (чтобы программа не вылетала при вводе букв)
double getSafeDouble(string message) {
    double value;
    while (true) {
        cout << message;
        if (cin >> value && value > 0) {
            return value;
        } else {
            cout << "Ошибка! Пожалуйста, введите положительное число." << endl;
            cin.clear(); // Сбрасываем флаг ошибки
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очищаем буфер
        }
    }
}

int main() {
    // Настраиваем кодировку UTF-8 для корректного ввода и вывода русского языка
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    string name;

    while (true) {
        cout << "\n--------------------------------------------" << endl;
        cout << "Введите имя (или 'выход' / 'exit' для завершения): ";
        
        // Очищаем поток и считываем имя целиком (включая пробелы)
        if (!(cin >> ws && getline(cin, name))) break;

        // Проверка на выход
        if (name == "exit" || name == "выход" || name == "Выход" || name == "EXIT") {
            cout << "До свидания! Программа завершена." << endl;
            break; 
        }

        // Ввод данных пользователя с использованием защищенной функции
        double weight = getSafeDouble("Введите ваш вес (в кг): ");
        double height = getSafeDouble("Введите ваш рост (в метрах, например 1.75): ");

        // Расчет ИМТ
        double bmi = weight / pow(height, 2);

        // Вывод результата
        cout << "\n--- Результат для пользователя: " << name << " ---" << endl;
        cout << "Ваш ИМТ: " << fixed << setprecision(2) << bmi << endl;

        // Классификация ИМТ
        cout << "Категория: ";
        if (bmi < 18.5) cout << "Недостаточная масса тела";
        else if (bmi < 25.0) cout << "Нормальный вес";
        else if (bmi < 30.0) cout << "Избыточная масса тела";
        else cout << "Ожирение";
        cout << endl;
    }

    return 0;
}