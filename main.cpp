#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleOutputCP(1251);

	double operand1;
	double operand2;
	char action;

	std::cout << "Введите первый операнд: ";
	std::cin >> operand1;
	std::cout << "Введите оператор: ";
	std::cin >> action;
	std::cout << "Введите второй операнд: ";
	std::cin >> operand2;

	if (action == '+') {
		std::cout << "Результат: " << operand1 + operand2;
	}
	else if (action == '-') {
		std::cout << "Результат: " << operand1 - operand2;
	}
	else if (action == '*') {
		std::cout << "Результат: " << operand1 * operand2;
	}
	else if ((action == '/' || action == '%') && operand2 == 0.0) {
		std::cout << "Ошибка!";
	}
	else if (action == '/') {
		std::cout << "Результат: " << operand1 / operand2;
	}
	else if (action == '^') {
		std::cout << "Результат: " << pow(operand1, operand2);
	}
	else if (action == '%') {
		std::cout << "Результат: " << operand1 / operand2 * 100 << "%";
	}
	else if (action == '|') {
		std::cout << "Результат: " << pow(operand1, 1 / operand2);
	}
	else {
		std::cout << "Неизвестный оператор!";
	}

	return 0;
}