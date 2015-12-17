#include "list.h"

class Queue : public List{
public:
	Queue();
	int queue(void* data);
	int dequeue(void** data);
	~Queue();
};