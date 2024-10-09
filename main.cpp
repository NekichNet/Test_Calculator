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
		std::cout << "������� ������ �������: ";
		std::cin >> operand1;
		std::cout << "������� ��������: ";
		std::cin >> action;
		std::cout << "������� ������ �������: ";
		std::cin >> operand2;

		if (action == '+') {
			std::cout << "���������: " << Summ(operand1, operand2);
		}
		else if (action == '-') {
			std::cout << "���������: " << Diff(operand1, operand2);
		}
		else if (action == '*') {
			std::cout << "���������: " << Multi(operand1, operand2);
		}
		else if ((action == '/' || action == '%') && operand2 == 0.0) {
			std::cout << "������!";
		}
		else if (action == '/') {
			std::cout << "���������: " << Div(operand1, operand2);
		}
		else if (action == '^') {
			std::cout << "���������: " << pow(operand1, operand2);
		}
		else if (action == '%') {
			std::cout << "���������: " << Perc(operand1, operand2) << "%";
		}
		else if (action == '|') {
			std::cout << "���������: " << pow(operand1, 1 / operand2);
		}
		else {
			std::cout << "����������� ��������!";
		}
		std::cout << "\n���������? (y/n) ";
		std::cin >> repeat;
	} while (repeat == 'y' || repeat == 'Y');

	return 0;
}