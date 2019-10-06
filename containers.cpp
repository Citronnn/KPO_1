#include "headers.h"
#include "Point.h"
#include "Colour.h"
#include "Shape.h"
#include "RightTriangle.h"
#include "RightTriangleRoundedCorners.h"
#include "Text.h"
#include "TriangleText.h"
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>

int main(){
    std::initializer_list<int> init = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    auto vector = std::vector<int>(init);
    auto list = std::list<int>(init);
    auto deque = std::deque<int>(init);
    //Vector и deque позволяет обратиться к любому элементу последовательности за равные промежутки времени, не зависящие от размеров последовательности, list - нет:
    std::cout << "Обращение к любому элементу последовательности"<< std::endl;
    std::cout << "vector[4] = " << vector[4] << std::endl;
    std::cout << "deque[4] = " << deque[4] << std::endl;
    //Все три контейнера позволяют эффективно получить доступ к первому или последнему элементу
    std::cout << "Доступ к первому и последнему элементам" << std::endl;
    std::cout << "Первый vector: " << vector.front() << "\nПоследний vector: " << vector.back() << std::endl;
    std::cout << "Первый list: " << list.front() <<  "\nПоследний list: " << list.back() << std::endl;
    std::cout << "Первый deque: " << deque.front() <<  "\nПоследний deque: " << deque.back() << std::endl;
    //vector не позволяет добавлять элементы в начало
    std::cout << "Добавление в начало - 19 (кроме вектора), в конец - 98" << std::endl;
    deque.push_back(19);
    deque.push_front(98);
    list.push_back(19);
    list.push_front(98);
    vector.push_back(98);

    std::cout << "Итерация по vector"  << std::endl;
    for (auto & it : vector) {
        std::cout << it << " ";
    }
    std::cout << std::endl;

    std::cout << "Итерация по list"  << std::endl;
    for (auto & it : list) {
        std::cout << it << " ";
    }
    std::cout << std::endl;

    std::cout << "Итерация по deque"  << std::endl;
    for (auto & it : deque) {
        std::cout << it << " ";
    }
    std::cout << std::endl;

    std::stack<int> stack;

    std::cout << "Заполним stack от 0 до 9:" << std::endl;
    for (int i = 0; i < 10; i++) {
        stack.push(i);
        std::cout << i << ' ';
    }
    std::cout << std::endl;
    std::cout << "Вывод stack" << std::endl;
    int stackSize = stack.size();
    for (int i = 0; i < stackSize; i++) {
        std::cout << stack.top() << ' ';
        stack.pop();
    }
    std::cout << std::endl;

    std::queue<int> queue;

    std::cout << "Заполним очередь от 0 до 9:" << std::endl;
    for (int i = 0; i < 10; i++) {
        queue.push(i);
        std::cout << i << ' ';
    }
    std::cout << std::endl;
    std::cout << "Первый элемент очереди: " << queue.front() << std::endl;
    std::cout << "Послений элемент очереди: " << queue.back() << std::endl;

    std::priority_queue <int> priorityQueue;
    std::cout << "Заполним priority_queue случайными числами:" << std::endl;
    int numbersForPrQueue[10] = {11, 22, 2, 4, 55, 3, 0, 92, 13, 5};
    for (int i = 0; i < 10; i++) {
        priorityQueue.push(numbersForPrQueue[i]);
        std::cout << numbersForPrQueue[i] << ' ';
    }
    std::cout << std::endl;
    std::cout << "Вывод priority_queue" << std::endl;
    int priorityQueueSize = priorityQueue.size();
    for (int i = 0; i < priorityQueueSize; i++) {
        std::cout << priorityQueue.top() << ' ';
        priorityQueue.pop();
    }
    std::cout << std::endl;

    std::cout << "Заполнение map" << std::endl;
    auto map = std::map<int, int> {{0, 1}, {2, 3}, {4, 5}};
    for (auto & it : map) {
        std::cout << it.first << " " << it.second << std::endl;
    }

    std::cout << "Изменение map" << std::endl;
    map[1] = 98;
    map[0] = 19;

    for (auto & it : map) {
        std::cout << it.first << " " << it.second << std::endl;
    }
    return 0;
}