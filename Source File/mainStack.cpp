#include "../LinearStructures/Stack.h"

int main(){
	
	Stack<int>* st=new Stack<int>();
	
	//Push Data
	st->push(4);
	st->push(2);
	
	//Print Stack
	st->print();
	
	//Pop Data
	st->pop();

  return 0;
}
