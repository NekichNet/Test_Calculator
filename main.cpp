#include <iostream>
#include <Windows.h>

double Summ(double a, double b) { return a + b; }

double Diff(double a, double b) { return a - b; }

double Multi(double a, double b) { return a * b; }

double Div(double a, double b) { return a / b; }

double Perc(double a, double b) { return a / b * 100; }

int main() {
	SetConsoleOutputCP(1251);

	double operand1;
	double operand2;
	char action, repeat;

	do
	{
		std::cout << "Введите первый операнд: ";
		std::cin >> operand1;
		std::cout << "Введите оператор: ";
		std::cin >> action;
		std::cout << "Введите второй операнд: ";
		std::cin >> operand2;

		if (action == '+') {
			std::cout << "Результат: " << Summ(operand1, operand2);
		}
		else if (action == '-') {
			std::cout << "Результат: " << Diff(operand1, operand2);
		}
		else if (action == '*') {
			std::cout << "Результат: " << Multi(operand1, operand2);
		}
		else if ((action == '/' || action == '%') && operand2 == 0.0) {
			std::cout << "Ошибка!";
		}
		else if (action == '/') {
			std::cout << "Результат: " << Div(operand1, operand2);
		}
		else if (action == '^') {
			std::cout << "Результат: " << pow(operand1, operand2);
		}
		else if (action == '%') {
			std::cout << "Результат: " << Perc(operand1, operand2) << "%";
		}
		else if (action == '|') {
			std::cout << "Результат: " << pow(operand1, 1 / operand2);
		}
		else {
			std::cout << "Неизвестный оператор!";
		}
		std::cout << "\nПовторить? (y/n) ";
		std::cin >> repeat;
	} while (repeat == 'y' || repeat == 'Y');

	return 0;
}