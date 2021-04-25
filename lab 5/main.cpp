#include <iostream>
#include "queue.h"

int main() {
	MyQueue q1(5);
	q1.Push(1);
	q1.Push(4);
	q1.Push(5);
	q1.Push(10);
	q1.Push(99);
	q1.Pop();
	q1.Pop();
	q1.Print();
	std::cout << std::endl;
	q1.Inversion();
	q1.Print();
	std::cout << std::endl;
	std::cout << q1.First() << '\t' << q1.Last();

}