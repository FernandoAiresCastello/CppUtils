#include <cassert>
#include <string>
#include <vector>
#include <Windows.h>
#include "CppUtils.h"
using namespace CppUtils;

int main() {

	printf("Testing CppUtils...\n\n");

	std::string test = "Hello World!*-*This is*- 2*-*This is 3";
	auto parts = String::Split(test, "*-*", true);

	return 0;
}
