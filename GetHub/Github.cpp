# include <iostream>
int main()
{
	std::cout << "========================Exercise 1 " << std::endl;
	{
		int a;

		std::cout << "Enter number" << std::endl;
		std::cin >> a;

		a % 2 == 0 ? std::cout << "Even number" << std::endl : std::cout << "Odd number" << std::endl;

	}