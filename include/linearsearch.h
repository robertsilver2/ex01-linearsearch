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

#include <cstdint>

namespace edu { namespace vcccd { namespace vc { namespace csv15 {

template <class T>
int64_t find(const T& value, T array[], size_t size) {
	if (array == NULL) {
		return(-1);
	}
	for (int i = 0; i<size; i++) {
		if (value==array[i]) return i;
	}return -1;
}

}}}}