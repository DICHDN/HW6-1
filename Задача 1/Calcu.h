#pragma once


	
double add(double num1, double num2)
{
	return num1 + num2;
}
	double multiply(double num1, double num2)
	{
		return num1 * num2;
	};
	double subtract_1_2(double num1, double num2)
	{
		return num1 - num2;
	}
	double subtract_2_1(double num1, double num2)
	{
		return num2 - num1;
	}
	double divide_1_2(double num1, double num2)
	{
		if (num2 == 0)
		{
			std::cout << "делитель равен 0 - деление не может быть выполнено" << std::endl;
			return 0;// на случай отсутствия проверки
		}
		else return num1 / num2;
	}
	double divide_2_1(double num1, double num2)
	{
		if (num1 == 0)
		{
			std::cout << "число равно 0 - деление не может быть выполнено" << std::endl; // на случай отсутствия проверки
			return 0;
		}
		else return num2 / num1;
	}
	bool set_num1(double num1)
	{
		if (num1 != 0) return true;
		else return false;
	}
	bool set_num2(double num2)
	{
		if (num2 != 0) return true;
		else return false;
	}

	double degree(double num1, double num2)
	{
		num1 = pow(num1, num2);
		return num1;
	}
