#pragma once

#include <string_view>
#include <vector>
#include <cstddef>

class Response {
public:
	Response(std::string_view);
private:
	std::string_view m_buffer;
};
