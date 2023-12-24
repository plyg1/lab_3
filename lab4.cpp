#include <iostream>
using namespace std;

/* Proc15.Описати процедуру ShiftLeft3(A, B, C), що виконує лівий циклічний зсув :
значення A переходить в C, значення C - в B, значення B - в A(A, B, C -
    дійсні параметри, які є одночасно вхідними та вихідними).За допомогою
    цієї процедури виконати лівий циклічний зсув для двох даних наборів з
    трьох чисел : (A1, B1, C1) і(A2, B2, C2).*/
void ShiftLeft3(double& A, double& B, double& C) {
    double temp = A;
    A = B;
    B = C;
    C = temp;
}

/*Boolean25. Дано числа x, y. Перевірити істинність висловлювання: «Точка з
координатами (x, y) лежить в другій координатної чверті».*/
bool CheckInput(double x, double y) {
    return cin.good();
}

bool IsInSecondQuadrant(double x, double y) {
    return (x < 0) && (y > 0);
}

/*Дано тризначне число. Вивести число, отримане при перестановці
цифр сотень і десятків вихідного числа (наприклад, 123 перейде в
213).*/
bool CheckInput(int number) {
    return (number >= 100) && (number <= 999);
}

int InputNumber() {
    int number;
    cout << "Enter a three-digit number: ";
    cin >> number;
    return number;
}

int SwapHundredsAndTens(int number) {
    int units = number % 10;
    int tens = (number / 10) % 10;
    int hundreds = number / 100;
    return units * 100 + tens * 10 + hundreds;
}

void DisplayResult(int result) {
    cout << "Number obtained by swapping hundreds and tens: " << result << endl;
}

// Меню для вибору завдань
void Menu() {
    int taskNumber;

    do {
        cout << "Select a task (1-3) or 0 to exit: ";
        cin >> taskNumber;

        switch (taskNumber) {
        case 1: {
            double A1, B1, C1;
            cout << "Enter numbers for the first set (A1, B1, C1): ";
            cin >> A1 >> B1 >> C1;
            ShiftLeft3(A1, B1, C1);
            cout << "Left cyclic shift for the first set: " << A1 << ", " << B1 << ", " << C1 << endl;
            break;
        }
        case 2: {
            double x, y;
            cout << "Enter coordinates of the point (x, y): ";
            cin >> x >> y;
            if (CheckInput(x, y)) {
                if (IsInSecondQuadrant(x, y)) {
                    cout << "The point is in the second quadrant." << endl;
                }
                else {
                    cout << "The point is not in the second quadrant." << endl;
                }
            }
            else {
                cout << "Incorrect input. Please enter numerical values." << endl;
            }
            break;
        }
        case 3: {
            int inputNumber = InputNumber();
            if (CheckInput(inputNumber)) {
                int result = SwapHundredsAndTens(inputNumber);
                DisplayResult(result);
            }
            else {
                cout << "Incorrect input. Please enter a three-digit number." << endl;
            }
            break;
        }
        case 0:
            cout << "The program has terminated." << endl;
            break;
        default:
            cout << "Invalid task! (Only 0-3)" << endl;
            break;
        }

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (taskNumber != 0);
}

int main() {
    Menu();
    return 0;
}
