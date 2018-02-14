#pragma once

#include <string>
#include <iosfwd>

enum Orientation // Перечисление
{
	UP,
	DOWN,
	RIGHT,
	LEFT,
	FORWARD,
	BACKWARD
};

void pyramid
(
	int x,
	int y,
	int z,
	int height,
	std::string block_name,
	Orientation,
	std::ofstream &out
);


void up_pyramid
(
	int x,
	int y,
	int z,
	int height,
	std::string block_name,
	std::ofstream &out
);

void up_pyramid
(
	int x,
	int y,
	int z,
	int height,
	std::string block_name,
	std::ofstream &out
);

void down_pyramid
(
	int x,
	int y,
	int z,
	int height,
	std::string block_name,
	std::ofstream &out
);

void left_pyramid
(
	int x,
	int y,
	int z,
	int height,
	std::string block_name,
	std::ofstream &out
);

void right_pyramid
(
	int x,
	int y,
	int z,
	int height,
	std::string block_name,
	std::ofstream &out
);

void forward_pyramid
(
	int x,
	int y,
	int z,
	int height,
	std::string block_name,
	std::ofstream &out
);

void backward_pyramid
(
	int x,
	int y,
	int z,
	int height,
	std::string block_name,
	std::ofstream &out
);