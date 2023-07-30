#include "server.hh"

#include <sys/stat.h>

#include <format>
#include <filesystem>


// Returns true iff the file exists and is a directory
bool is_dir(const std::filesystem::path & path) {
	struct stat sb;
	return stat(path.c_str(), &sb) == 0 && (sb.st_mode & S_IFDIR);
}

Server Server::load_dir(const std::filesystem::path & path) {
	using std::filesystem::recursive_directory_iterator;

	if (!is_dir(path)) {
		throw std::runtime_error(std::format("Invalid root path {}", path.c_str()));
	}

	// Find index.html
	// Find other html files

	for (const auto & ent : recursive_directory_iterator(path)) {
		auto ent_path = ent.path();

	}
}
