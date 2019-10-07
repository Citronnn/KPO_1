#include "headers.h"
class QueueException {
public:
	QueueException() = default;
	inline QueueException(const std::string& msg)
		: _msg(msg) {}

	inline std::string what() const {
		return _msg;
	}

protected:
	std::string _msg;
};


class QueueInvalidIterator : public QueueException {
public:
	inline QueueInvalidIterator(const std::string& msg)
		: QueueException(msg) {}
};

class QueueBlank: public QueueException {
public:
	inline QueueBlank(const std::string& msg)
		: QueueException(msg) {}
};