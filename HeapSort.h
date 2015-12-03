#include <iostream>

typedef  bool (*CompareFn)(void* arg1,void* arg2);
class HeapSort
{
public:
	HeapSort(int size,CompareFn cmp);
	~HeapSort();
	insertItem();
	removeItem();
private:
	int size;

	/* data */
};