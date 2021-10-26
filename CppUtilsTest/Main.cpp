#include <cassert>
#include <string>
#include <vector>
#include <Windows.h>
#include "CppUtils.h"
using namespace CppUtils;

int main(int argc, char* argv[]) {

	printf("Testing CppUtils...\n\n");

	assert(String::ToInt("0xffff") == 65535);
	assert(String::ToInt("-0xffff") == -65535);
	assert(String::ToInt("255") == 255);
	assert(String::ToInt("-255") == -255);
	assert(String::ToInt("0b11111111") == 255);
	assert(String::ToInt("-0b11111111") == -255);
	assert(String::ToInt("0xff") == 255);
	assert(String::ToInt("-0xff") == -255);
	assert(String::IntToHex(65535) == "ffff");
	assert(String::IntToBinary(255) == "11111111");

	MsgBox::Info("All tests passed OK!");
	return 0;
}
