#include <iostream>
#include <Windows.h>

using namespace std;

// Завдання 1
void task1() {
    int a, b;
    cout << "Введіть два числа: ";
    cin >> a >> b;

    if (a > b) {
        cout << a << endl;
    }
    else {
        cout << b << endl;
    }
}

// Завдання 2
void task2() {
    float x, y;
    cout << "Введіть координати точки (x, y): ";
    cin >> x >> y;

    if (x >= 0 && x <= 8 && y >= 0 && y <= 6) {
        cout << "Точка входить у фігуру" << endl;
    }
    else {
        cout << "Точка не входить у фігуру" << endl;
    }
}

// Завдання 3
void task3() {
    float a = 8, b = 6;
    float area = a * b;
    float perimeter = 2 * (a + b);

    cout << "Площа прямокутника: " << area << endl;
    cout << "Периметр прямокутника: " << perimeter << endl;
}

// Меню для вибору завдань
void menu() {
    setlocale(LC_ALL, "ukrainian");

    int task;

    // Цикл, який буде тривати до вибору завдання 0 (вихід)
    do {
        // Виведення на екран доступних завдань
        cout << "Виберіть завдання (або 0 для виходу): " << endl;
        cout << "1 - Алгоритм з розгалуженням" << endl;
        cout << "2 - Перевірка входження точки у фігуру" << endl;
        cout << "3 - Обчислення площі та периметра фігури" << endl;

        // Введення номеру завдання від користувача
        cin >> task;

        // Виконання відповідного завдання в залежності від введеного номеру
        switch (task) {
        case 1:
            task1();
            break;

        case 2:
            task2();
            break;

        case 3:
            task3();
            break;

        case 0:
            cout << "Програма завершила роботу." << endl;
            break;

        default:
            cout << "Помилка! Виберіть завдання 1, 2, 3 або 0 для виходу" << endl;
            break;
        }

    } while (task != 0);  // Повторювати цикл, поки не буде вибрано завдання 0
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    menu();

    return 0;
}
