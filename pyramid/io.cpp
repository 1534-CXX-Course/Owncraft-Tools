#include "io.h"

#include <string>
#include <stdexcept>

Orientation input_orientation()
{
	std::string input;
	std::cin >> input;
	// std::getline(std::cin, input);

	if (input == "UP")
		return UP;
	else if (input == "DOWN")
		return DOWN;
	else if (input == "RIGHT")
		return RIGHT;
	else if (input == "LEFT")
		return LEFT;
	else if (input == "FORWARD")
		return FORWARD;
	else if (input == "BACKWARD")
		return BACKWARD;
	else
		throw std::runtime_error("Invalid orientation");
}