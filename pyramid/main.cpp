#include <iostream>
#include <fstream>
#include <locale>
#include <cassert>

#include "pyramid.h"

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

	int orientation = 0;
	std::cout << "Pyramid orientation: ";
	std::cin >> orientation;

	std::ofstream out("world.txt");

	switch (orientation)
	{
	case UP: 
		up_pyramid(x, y, z, height, block_name, out);
		break;

	case DOWN:
		down_pyramid(x, y, z, height, block_name, out);
		break;

	case RIGHT:
		right_pyramid(x, y, z, height, block_name, out);
		break;

	case LEFT:
		left_pyramid(x, y, z, height, block_name, out);
		break;

	case FORWARD:
		forward_pyramid(x, y, z, height, block_name, out);
		break;

	case BACKWARD:
		backward_pyramid(x, y, z, height, block_name, out);
		break;

	default:
		std::cerr << "INVALID PYRAMID" << std::endl;		
	}

	system("pause");
	return 0;
}

void up_pyramid(int x, int y, int z, int height, std::string block_name, std::ofstream &out)
{
	assert(height > 0);

	int line_pos_a = 0, line_pos_b = 0;
	for (int offset = 0, line_length = 1; offset + 1 <= height; ++offset, line_length += 2)
		for (line_pos_a = -offset; line_pos_a <= offset; ++line_pos_a)
			for (line_pos_b = -offset; line_pos_b <= offset; ++line_pos_b)
			{
				out << x + line_pos_a
					<< " " << y + line_pos_b
					<< " " << z + -offset
					<< " " << block_name
					<< std::endl;
			}
}

void down_pyramid
(
	int x,
	int y,
	int z,
	int height,
	std::string block_name,
	std::ofstream &out
)
{
	assert(height > 0);

	int line_pos_a = 0, line_pos_b = 0;
	for (int offset = 0, line_length = 1; offset + 1 <= height; ++offset, line_length += 2)
		for (line_pos_a = -offset; line_pos_a <= offset; ++line_pos_a)
			for (line_pos_b = -offset; line_pos_b <= offset; ++line_pos_b)
			{
				out << x + line_pos_a
					<< " " << y + line_pos_b
					<< " " << z + offset
					<< " " << block_name
					<< std::endl;
			}
}

void right_pyramid
(
	int x,
	int y,
	int z,
	int height,
	std::string block_name,
	std::ofstream &out
)
{
	assert(height > 0);

	int line_pos_a = 0, line_pos_b = 0;
	for (int offset = 0, line_length = 1; offset + 1 <= height; ++offset, line_length += 2)
		for (line_pos_a = -offset; line_pos_a <= offset; ++line_pos_a)
			for (line_pos_b = -offset; line_pos_b <= offset; ++line_pos_b)
			{
				out << x - offset
					<< " " << y + line_pos_b
					<< " " << z + line_pos_a
					<< " " << block_name
					<< std::endl;
			}
}

void left_pyramid
(
	int x,
	int y,
	int z,
	int height,
	std::string block_name,
	std::ofstream &out
)
{
	assert(height > 0);

	int line_pos_a = 0, line_pos_b = 0;
	for (int offset = 0, line_length = 1; offset + 1 <= height; ++offset, line_length += 2)
		for (line_pos_a = -offset; line_pos_a <= offset; ++line_pos_a)
			for (line_pos_b = -offset; line_pos_b <= offset; ++line_pos_b)
			{
				out << x + offset
					<< " " << y + line_pos_b
					<< " " << z + line_pos_a
					<< " " << block_name
					<< std::endl;
			}
}

void forward_pyramid
(
	int x,
	int y,
	int z,
	int height,
	std::string block_name,
	std::ofstream &out
)
{
	assert(height > 0);

	int line_pos_a = 0, line_pos_b = 0;
	for (int offset = 0, line_length = 1; offset + 1 <= height; ++offset, line_length += 2)
		for (line_pos_a = -offset; line_pos_a <= offset; ++line_pos_a)
			for (line_pos_b = -offset; line_pos_b <= offset; ++line_pos_b)
			{
				out << x + line_pos_b
					<< " " << y + offset
					<< " " << z + line_pos_a
					<< " " << block_name
					<< std::endl;
			}
}

void backward_pyramid
(
	int x,
	int y,
	int z,
	int height,
	std::string block_name,
	std::ofstream &out
)
{
	assert(height > 0);

	int line_pos_a = 0, line_pos_b = 0;
	for (int offset = 0, line_length = 1; offset + 1 <= height; ++offset, line_length += 2)
		for (line_pos_a = -offset; line_pos_a <= offset; ++line_pos_a)
			for (line_pos_b = -offset; line_pos_b <= offset; ++line_pos_b)
			{
				out << x + line_pos_b
					<< " " << y - offset
					<< " " << z + line_pos_a
					<< " " << block_name
					<< std::endl;
			}
}