#include "MyVector.h"
#include <iostream>

using namespace std;

MyVector::MyVector(unsigned int size, SortStrategy* sortStrategy)
{
	if (size == 0)
		size = 5;

	this->size = size;

	arr = new int[size];

	for (int i = 0; i < size; i++)
		arr[i] = i + 1;

	this->sortStrategy = sortStrategy;
}

MyVector::~MyVector()
{
	delete[] arr;
}

void MyVector::SetSortStrategy(SortStrategy* sortStrategy)
{
	this->sortStrategy = sortStrategy;
}

void MyVector::Print()
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << endl;
}
void MyVector::Sort()
{
	if (sortStrategy != nullptr)
		sortStrategy->Sort(arr, size);
}