#include <locale>
#include "Arithmetic.h"

#define PATH "C:\\out.txt"

int main()
{
	setlocale(LC_ALL, "RUS");

	Arithmetic ex;
	std::string abc = "((3 + b) ^ 2) + ((2 + a) ^ 2) - 5";
	double res;

	std::cout << "����� ���������: ";
	ex.input(abc);
	ex.addVar('a', 3);
	ex.addVar('b', 2);
	ex.print();
	std::cout << "\n";

	std::cout << "�������� �������� ������: ";
	abc = ex.ConvertToPolish();
	std::cout << abc << "\n";

	std::cout << "�����: ";
	res = ex.Calculate(abc);
	std::cout << res << "\n";

	ex.WriteFile(PATH);

	std::cout << "����� ��������� � �����: ";
	Arithmetic ex_2;
	ex_2.ReadFile(PATH);
	ex.print();
	std::cout << "\n\n";

	std::cout << "��������� � ������� ��������: ";
	Arithmetic ex_3;
	abc = "[{10 - 8} ^ 5] / 2";
	ex_3.input(abc);
	ex_3.print();

	std::cout << "\n�������� �������� ������: ";
	abc = ex_3.ConvertToPolish();
	std::cout << abc << "\n";

	std::cout << "�����: ";
	res = ex_3.Calculate(abc);
	std::cout << res << "\n";

	system("pause");
	return 0;
}




