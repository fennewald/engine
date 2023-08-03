#pragma once

/// An Ip socket
class Socket {
public:
	Socket();

	int fd(void) const;

	void bind();

	// Wrapper for `setsockopt`
	void setopt(int level, int opt, const void * val, unsigned int len);

	void set_reuseaddr(bool val = true);

private:
	int m_fd;
};
