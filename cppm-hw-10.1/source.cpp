#include <iostream>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string name;

	std::cout << "������� ���:" << "\n";
	std::cin >> name;
	std::cout << "������������, " << name << "!\n";
}