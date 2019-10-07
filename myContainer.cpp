#include "headers.h"
#include "Point.h"
#include "Colour.h"
#include "Shape.h"
#include "RightTriangle.h"
#include "RightTriangleRoundedCorners.h"
#include "Text.h"
#include "TriangleText.h"
#include "priorityQueueExceptions.h"
#include "priorityQueueContainer.h"

int main() {
    std::shared_ptr<Shape> rt{ new RightTriangle(0,0,5) };
    std::shared_ptr<Shape> rt2{ new RightTriangle(0,0,1) };
	std::shared_ptr<Shape> t{ new Text(0,0,"Фигура - текст", 0) };
    PriorityQueue<std::shared_ptr<Shape>> pq;
    pq.push(rt2, 3);
    pq.push(rt, 555);
    pq.push(t);
    pq.push(t, 13);
    for (auto i = pq.begin(); i != pq.end(); i++) {
        std::cout << (*i).first << "\n" << *((*i).second) << std::endl;
    }
    PriorityQueue<std::shared_ptr<Shape>> pq1;
    try {
        pq1.pop();
	} catch (QueueException& e) {
		std::cout << "Исключение " << '"' << e.what() << '"' << std::endl;
	}
	try {
        pq1.top();
	} catch (QueueException& e) {
		std::cout << "Исключение " << '"' << e.what() << '"' << std::endl;
	}
    try {
        std::cout << (*pq1.begin()).first << "  "<< (*(--pq1.end())).first << std::endl;
	} catch (QueueException& e) {
		std::cout << "Исключение " << '"' << e.what() << '"' << std::endl;
	}
    return 0;
}