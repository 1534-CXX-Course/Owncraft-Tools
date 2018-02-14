#include <iostream>
#include <fstream>
#include <locale>
#include <cassert>

#include "pyramid.h"
#include "io.h"

int main()
{
	setlocale(LC_ALL, "russian");

	int x = 0, y = 0, z = 0;
	std::cout << "Pyramid vertex: : ";
	std::cin >> x >> y >> z;
	
	int height = 0;
	std::cout << "Pyramid height: ";
	std::cin >> height;

	std::string block_name;
	std::cout << "Block name: ";
	std::cin >> block_name;

	std::cout << "Pyramid orientation: ";

	Orientation orientation;
	try
	{
		orientation = input_orientation();
	}
	catch (std::runtime_error error)
	{
		std::cerr << "Error: " << error.what() << std::endl;
		system("pause");
		return -1;
	}

	std::ofstream out("world.txt");

	pyramid(x, y, z, height, block_name, orientation, out);

	system("pause");
	return 0;
}

