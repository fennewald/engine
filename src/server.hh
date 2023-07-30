#pragma once

#include <filesystem>

class Server {
public:
	Server() = default;

	static Server load_dir(const std::filesystem::path & path);

private:
	// Server the page
	void serve();
};
