#pragma once

#include <cstddef>
#include <string_view>
#include <vector>

class Response {
public:
	Response(std::string_view);

private:
	std::string_view m_buffer;
};
