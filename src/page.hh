#pragma once

#include <filesystem>

class Page {
public:
	Page(std::filesystem::path path);
private:
	std::filesystem::path m_path;
};
