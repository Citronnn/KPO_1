#include "headers.h"
class QueueException {
public:
	QueueException() = default;
	inline QueueException(const std::string& info)
		: info(info) {}

	inline std::string what() const {
		return info;
	}

protected:
	std::string info;
};

class QueueInvalidIterator : public QueueException {
public:
	inline QueueInvalidIterator(const bool isEmpty) {
		info = "QueueInvalidIterator";
	}
};

template <typename T>
class QueueBlank: public QueueException {
public:
	inline QueueBlank(const std::vector<std::pair<int, T>>& queue) {
		info = "QueueBlank";
	}
};