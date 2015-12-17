#include "queue.h"

Queue::Queue(){
}

Queue::~Queue(){
}

int Queue::queue(void* data){}
	return(this->insertAfter(getListTail(),data));
}

int Queue::dequeue(void** data){
	return(this->removeAfter(NULL,data));
		
}
