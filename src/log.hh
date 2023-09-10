#pragma once

#include <array>
#include <cstddef>

namespace log {

class entry {
	
};

template <std::size_t Len>
class buffer {
public:

private:
	std::array<entry, Len> m_arr;
};

}
