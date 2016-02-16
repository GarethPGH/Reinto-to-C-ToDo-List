#include <iostream>
#include <string>
#include "resultString.h"


std::string resultString() {
	std::string task;
	std::getline(std::cin, task);
	return task;
}