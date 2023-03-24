#include "../LinearStructures/Queue.h"

int main(){
	
	Queue<int>* q=new Queue<int>();
	
	q->enqueue(4);
	q->enqueue(-9);
	q->enqueue(10);
	q->enqueue(7);
	
	q->dequeue();
	
	q->print();
	
	
 return 0;
}
