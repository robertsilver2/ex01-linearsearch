#include <iostream>
#include "linearsearch.h"

using edu::vcccd::vc::csv15::find;

int main(int argc, char *argv[]) {
	int array[]={1, 1, 2};
	int64_t index=find(2, array, 3);
	
	std::cout << "index: " << index << std::endl;
}