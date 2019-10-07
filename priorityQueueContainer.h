#include "headers.h"
template<typename T, class Container = std::vector<std::pair<int, T>>>
class PriorityQueue;

template <typename T>
class PriorityQueueIterator {
public:
    PriorityQueueIterator (typename std::vector<std::pair<int, T>>::reverse_iterator ptr_, bool empty) : ptr(ptr_), isEmpty(empty) {}
    const std::pair<int, T>& operator*()
    {
        if (isEmpty) {
			throw QueueInvalidIterator("iterator is invalid");
		}
        return *ptr;
    }
    const typename std::vector<std::pair<int, T>>::reverse_iterator operator->() {
        if (isEmpty) {
			throw QueueInvalidIterator("iterator is invalid");
		}
        return ptr;
    }
    typename std::vector<std::pair<int, T>>::reverse_iterator operator++() {
        return ++ptr;
    }
    PriorityQueueIterator operator++(int) {
        PriorityQueueIterator<T> orig = *this;
        ++(*this);
        return orig;
    }
    typename std::vector<std::pair<int, T>>::reverse_iterator operator--() {
        return --ptr;
    }
    PriorityQueueIterator operator--(int) {
        PriorityQueueIterator<T> orig = *this;
        --(*this);
        return orig;
    }
    bool operator==(const PriorityQueueIterator& other) const {
        return ptr == other.ptr;
    }
    bool operator!=(const PriorityQueueIterator& other) const {
        return !(*this == other);
    }
private:
    typename std::vector<std::pair<int, T>>::reverse_iterator ptr;
    bool isEmpty;
};

template<typename T, class Container>
class PriorityQueue {
public:
    friend class PriorityQueueIterator<T>;
    void push(T const& lhs, int priority) {
        if (!elements.size() || elements.back().first < priority) {
             elements.push_back(std::pair(priority,lhs));
        }
        else {
           // std::sort(elements.begin(), elements.end(), comparePairs<int, T>);
           for (int i = 0; i < elements.size(); i++) {
               if (elements[i].first > priority) {
                   elements.insert(elements.begin() + i, std::pair(priority,lhs));
                   break;
               }
           }
        }
    }
    void push(T const& lhs) {
        elements.push_back(std::pair(elements.back().first + 1,lhs));
    }
    void pop() {
         if (empty()) {
			throw QueueBlank("queue is empty");
		}
        elements.pop_back();
    }
    T const& top() const {
        if (empty()) {
			throw QueueBlank("queue is empty");
		}
        std::cout <<  elements.back().first << std::endl;
        return elements.back().second;
    }
    typedef typename Container::size_type size_type;
    size_type size() const {
        return elements.size();
    }
    bool empty() const {
        return elements.empty();
    }
    PriorityQueueIterator<T> begin() {
		return PriorityQueueIterator<T>(elements.rbegin(), empty());
	}
	PriorityQueueIterator<T> end() {
		return PriorityQueueIterator<T>(elements.rend(), empty());
	}
private:
    Container elements;
};