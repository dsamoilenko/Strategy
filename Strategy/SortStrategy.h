#pragma once

// абстрактный класс сотрировки, задающий правила для всех алгоритмов сортировки
class SortStrategy
{
public:
	virtual void Sort(int* array, int size) = 0;
};

