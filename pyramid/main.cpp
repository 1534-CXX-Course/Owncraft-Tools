#include <iostream>
#include <fstream>
#include <locale>
#include <cassert>

int main()
{
	setlocale(LC_ALL, "russian");

	int x = 0, y = 0, z = 0;
	std::cout << "������� ���������� ������� ��������: ";
	std::cin >> x >> y >> z;
	
	int height = 0;
	std::cout << "������� ������ ��������: ";
	std::cin >> height;

	std::string block_name;
	std::cout << "������� ��� �����: ";
	std::cin >> block_name;

	int orientation = 0;
	std::cout << "������� ���������� ��������: ";
	std::cin >> orientation;

	std::ofstream out("world.txt");

	int line_pos_a = 0, line_pos_b = 0;
	for (int offset = 0, line_length = 1; offset + 1 <= height; ++offset, line_length += 2)
		for (line_pos_a = -offset; line_pos_a <= offset; ++line_pos_a)
			for (line_pos_b = -offset; line_pos_b <= offset; ++line_pos_b)
			{
				switch (orientation)
				{
				case 0:
					out << x + line_pos_a
						<< " " << y + line_pos_b
						<< " " << z + -offset
						<< " " << block_name
						<< std::endl;
					break;

				case 1:
					out << x + line_pos_a
						<< " " << y + line_pos_b
						<< " " << z + -offset
						<< " " << block_name
						<< std::endl;
					break;

				case 2:
					out << x - offset
						<< " " << y + line_pos_b
						<< " " << z + line_pos_a
						<< " " << block_name
						<< std::endl;
					break;

				case 3:
					out << x + offset
						<< " " << y + line_pos_b
						<< " " << z + line_pos_a
						<< " " << block_name
						<< std::endl;
					break;

				case 4:
					out << x + line_pos_b
						<< " " << y + offset
						<< " " << z + line_pos_a
						<< " " << block_name
						<< std::endl;
					break;

				case 5:
					out << x + line_pos_b
						<< " " << y - offset
						<< " " << z + line_pos_a
						<< " " << block_name
						<< std::endl;
					break;

				default:
					std::cerr << "INVALID PYRAMID" << std::endl;
					//goto all_cycles_exit;
				}
			}

all_cycles_exit:

	system("pause");
	return 0;
}