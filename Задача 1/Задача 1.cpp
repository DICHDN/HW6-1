#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include "Calcu.h"







int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double num1 = 0, num2 = 0;

	char key = '0';
	do
	{
		system("cls");
		std::cout << "Введите число num1: ";
		std::cin >> num1;
		std::cout << std::endl;
		std::cout << "Введите число num2: ";
		std::cin >> num2;
		std::cout << std::endl;
		std::cout << "[1] сложение" << num1 << " и " << num2 << std::endl;
		std::cout << "[2] вычитание" << num2 << " из " << num1 << std::endl;
		std::cout << "[3] вычитание" << num1 << " из " << num2 << std::endl;
		std::cout << "[4] умножение" << num1 << " на " << num2 << std::endl;
		std::cout << "[5] деление" << num1 << " на " << num2 << std::endl;
		std::cout << "[6] деление" << num2 << " на " << num1 << std::endl;
		std::cout << "[7] возведение" << num1 << " в степень " << num2 << std::endl;
		std::cout << "[8] возведение" << num2 << " в степень " << num1 << std::endl;
		std::cout << "[0] выход из программы" << std::endl;
		std::cout << "Выбирете операцию:" << std::endl;
		std::cin >> key;
		std::cout << std::endl;
		if (key != '0')
		{
			switch (key)
			{
			case '1':
				std::cout << "Сложение " << num1 << " и " << num2 << " равно " << add(num1, num2) << std::endl;
				break;
			case '2':
				std::cout << "Вычитание " << num2 << " из " << num1 << " равно " << subtract_1_2(num1, num2) << std::endl;
				break;
			case '3':
				std::cout << "Вычитание " << num1 << " из " << num2 << " равно " << subtract_1_2(num2, num1) << std::endl;
				break;
			case '4':
				std::cout << "Умножение " << num1 << " на " << num2 << " равно " << multiply(num1, num2) << std::endl;
				break;
			case '5':
				std::cout << "Деление " << num1 << " на " << num2 << " равно " << divide_1_2(num1, num2) << std::endl;
				break;
			case '6':
				std::cout << "Деление " << num2 << " на " << num1 << " равно " << divide_1_2(num2, num1) << std::endl;
				break;
			case '7':
				std::cout << "Возведение " << num1 << " в степень " << num2 << " равно " << degree(num1, num2) << std::endl;
				break;
			case '8':
				std::cout << "Возведение " << num2 << " в степень " << num1 << " равно " << degree(num2, num1) << std::endl;
				break;
			default:
				std::cout << "Не верная команда! Повторите всё с начала!" << std::endl;
				break;
			}
		}
		else
		{
			std::cout << "До свидания!";
		}

		Sleep(5000);

	} while (key != '0');
	return 0;
}