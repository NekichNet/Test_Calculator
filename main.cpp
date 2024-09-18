#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleOutputCP(1251);

	double operand1;
	double operand2;
	char action;

	std::cout << "������� ������ �������: ";
	std::cin >> operand1;
	std::cout << "������� ��������: ";
	std::cin >> action;
	std::cout << "������� ������ �������: ";
	std::cin >> operand2;

	if (action == '+') {
		std::cout << "���������: " << operand1 + operand2;
	}
	else if (action == '-') {
		std::cout << "���������: " << operand1 - operand2;
	}
	else if (action == '*') {
		std::cout << "���������: " << operand1 * operand2;
	}
	else if ((action == '/' || action == '%') && operand2 == 0.0) {
		std::cout << "������!";
	}
	else if (action == '/') {
		std::cout << "���������: " << operand1 / operand2;
	}
	else if (action == '^') {
		std::cout << "���������: " << pow(operand1, operand2);
	}
	else if (action == '%') {
		std::cout << "���������: " << operand1 / operand2 * 100 << "%";
	}
	else if (action == '|') {
		std::cout << "���������: " << pow(operand1, 1 / operand2);
	}
	else {
		std::cout << "����������� ��������!";
	}

	// ������ �������

	int number;
	int first_digit;

	std::cout << "\n������� �����: ";
	std::cin >> number;

	first_digit = number / 10;
	number = (number - first_digit * 10) * 10 + first_digit;

	std::cout << "�������������� �����: " << number;

	return 0;
}