#include <locale>
#include "Arithmetic.h"

#define PATH "C:\\out.txt"

int main()
{
	setlocale(LC_ALL, "RUS");

	Arithmetic ex;
	std::string abc = "((3 + b) ^ 2) + ((2 + a) ^ 2) - 5";
	double res;

	std::cout << "Ввели выражение: ";
	ex.input(abc);
	ex.addVar('a', 3);
	ex.addVar('b', 2);
	ex.print();
	std::cout << "\n";

	std::cout << "Обратная польская запись: ";
	abc = ex.ConvertToPolish();
	std::cout << abc << "\n";

	std::cout << "Ответ: ";
	res = ex.Calculate(abc);
	std::cout << res << "\n";

	ex.WriteFile(PATH);

	std::cout << "После прочтения с файла: ";
	Arithmetic ex_2;
	ex_2.ReadFile(PATH);
	ex.print();
	std::cout << "\n\n";

	std::cout << "Выражение с разными скобками: ";
	Arithmetic ex_3;
	abc = "[{10 - 8} ^ 5] / 2";
	ex_3.input(abc);
	ex_3.print();

	std::cout << "\nОбратная польская запись: ";
	abc = ex_3.ConvertToPolish();
	std::cout << abc << "\n";

	std::cout << "Ответ: ";
	res = ex_3.Calculate(abc);
	std::cout << res << "\n";

	system("pause");
	return 0;
}




