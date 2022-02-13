#include <cassert>
#include <string>
#include <vector>
#include <Windows.h>
#include "CppUtils.h"
using namespace CppUtils;

int main() {

	printf("Testing CppUtils...\n\n");
	
	std::string tempPath = File::GetTempFilePath();
	File::WriteText(tempPath, "Hello World!");

	return 0;
}
