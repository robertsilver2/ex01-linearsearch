/**
 * CS V15 Data Structures and Algorithms
 * CRN: 70342
 * Assignment: ex01-linearsearch
 *
 * Statement of code ownership: I hereby state that I have written all of this
 * code and I have not copied this code from any other person or source.
 *
 * @robertsilver2
 */

#include <iostream>
#include "linearsearch.h"

using edu::vcccd::vc::csv15::find;

int main(int argc, char *argv[]) {
	int array[]={1, 1, 2};
	int64_t index=find(2, array, 3);
	
	std::cout << "index: " << index << std::endl;
	// system("PAUSE");
}