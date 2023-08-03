#include "socket.hh"

#include <sys/socket.h>

#include <system_error>

Socket::Socket() {
	m_fd = socket(AF_INET, SOCK_STREAM, 0);
	if (m_fd == -1) { throw std::system_error(errno, std::generic_category()); }
}

int Socket::fd(void) const { return m_fd; }

void Socket::bind() {
	// TODO: impl
}

void Socket::setopt(int level, int opt, const void * val, unsigned int len) {
	int res = setsockopt(m_fd, level, opt, val, len);
	if (res == -1) { throw std::system_error(errno, std::generic_category()); }
}

void Socket::set_reuseaddr(bool val) {
	int opt = val ? 1 : 0;
	setopt(SOL_SOCKET, SO_REUSEPORT, &opt, sizeof(opt));
}
