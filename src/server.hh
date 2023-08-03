#pragma once

#include <filesystem>

class Server {
public:
	Server() = default;

	static Server load_dir(const std::filesystem::path & path);

	// Start the server
	void serve(std::uint16_t port) const;

private:
};
