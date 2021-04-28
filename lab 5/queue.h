#pragma once

#include<iostream>

class MyQueue {

private:
	int* arr;
	int capacity;
	int size;
	int first;
	int last;

public:

	MyQueue(int cap) {
		capacity = cap;
		arr = new int[capacity];
		size = 0;
		first = 0;
		last = -1;
	}

	bool Empty() {
		return (size == 0);
	}

	void Push(int value) {
		if (size >= capacity) {
			std:: cout <<"Queue is full!";
		}
		else {
			arr[++last] = value;
			size++;
		}
	}

	void Pop() {
		if (Empty()) {
			std::cout << "queue is already empty.";
		}
		else {
			size--;
			last--;
			int* newArr = new int[size];
			for (int i = 0; i < size; ++i) {
				newArr[i] = arr[i + 1];
			}
			delete[]arr;
			arr = newArr;
		}
	}

	int First() {
		if (Empty()) {
			std::cout << "queue is empty!";
		}
		else {
			return arr[first];
		}
	}

	int Last() {
		if (Empty()) {
			std::cout << "queue is empty!";		
		}
		else {
			return arr[last];
		}
	}

	void Inversion() {
		int* inversArr = new int[capacity];
		for (int i = 0; i < size; ++i) {
			inversArr[i] = arr[size - 1 - i];
		}
		delete[] arr;
		first = 0;
		arr = inversArr;
	}

	void Print() {
		for (int i = 0; i < size; ++i) {
			std::cout << arr[i] << ' ';
		}
	}

	/*int& operator[](int index) {
		if (index >= 0) {
			return arr[index];
		}
		else throw std::exception("error!");
	}*/

	~MyQueue(){
		delete[] arr;
		size = 0;
	}
};
 
