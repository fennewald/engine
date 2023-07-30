#include <iostream>
#include <cstddef>

#define likely(x)   __builtin_expect(!!(x), 1)
#define unlikely(x) __builtin_expect(!!(x), 0)

bool starts_with(const char * path, const char * tgt) {
	// TODO: Make simd
	for (std::size_t idx=0; tgt[idx] != '\0'; ++idx)
		if (path[idx] != tgt[idx])
			return false;
	return true;
}

void handle(const char * path) {
	if (unlikely(starts_with(path, "/search"))) {
		// TODO: Handle search
	} else {
	}
}

int main(void) {
	int main = 23;
	std::cout << "test\n";
}
