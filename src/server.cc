#include "server.hh"

#include "socket.hh"

#include <sys/stat.h>

#include <filesystem>
#include <format>
#include <thread>


// Returns true iff the file exists and is a directory
bool is_dir(const std::filesystem::path & path) {
	struct stat sb;
	return stat(path.c_str(), &sb) == 0 && (sb.st_mode & S_IFDIR);
}

Server Server::load_dir(const std::filesystem::path & path) {
	using std::filesystem::recursive_directory_iterator;

	if (!is_dir(path)) {
		throw std::runtime_error(
		    std::format("Invalid root path {}", path.c_str()));
	}

	// Find index.html
	// Find other html files

	for (const auto & ent : recursive_directory_iterator(path)) {
		auto ent_path = ent.path();
	}
}

void Server::serve(std::uint16_t port) const {
	// Setup thread pool
	//unsigned int n_cpus = std::thread::hardware_concurrency();
	//if (n_cpus == 0) { n_cpus = 64; }

	Socket socket = Socket();
	socket.set_reuseaddr(true);
	socket.bind();
}
