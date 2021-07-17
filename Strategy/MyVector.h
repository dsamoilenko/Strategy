#pragma once

#include "SortStrategy.h"

class MyVector
{
protected:
	int* arr;
	unsigned int size;

	// указатель на потомка класса SortStrategy, который реализует один из методов сортировки
	SortStrategy* sortStrategy;
public:
	MyVector(unsigned int size, SortStrategy* sortStrategy);
	~MyVector();

	void SetSortStrategy(SortStrategy* sortStrategy);
	void Print();
	void Sort();

};

