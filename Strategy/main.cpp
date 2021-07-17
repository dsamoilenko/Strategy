#include <iostream>
#include "MyVector.h"
#include "SortStrategy.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "InsertionSort.h"

using namespace std;

void main()
{
	BubbleSort* bubbleSort = new BubbleSort();
	QuickSort* quickSort = new QuickSort();
	InsertionSort* insertionSort = new InsertionSort();

	// задание начального алгоритма сортировки
	MyVector vector(7, bubbleSort);

	// сортировка происходит методом пузырька
	vector.Sort();
	vector.Sort();
	vector.Sort();

	// меняем алгоритм сортировки на быструю сортировку (передача алгоритма в качестве параметра)
	vector.SetSortStrategy(quickSort);

	// сортировка происходит методом быстрой сортировки
	vector.Sort();
	vector.Sort();
	vector.Sort();

	// меняем алгоритм сортировки на сортировку вставками (передача алгоритма в качестве параметра)
	vector.SetSortStrategy(insertionSort);

	// сортировка происходит методом сортировки вставками
	vector.Sort();

	delete insertionSort;
	delete quickSort;
	delete bubbleSort;
}