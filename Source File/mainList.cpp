#include"../LinearStructures/List.h" 

int main(){
	
	//Integer type
	List<int>* l=new List<int>();
	
	//Insert of Nodes
	l->push_front(4);
	l->push_tail(20);
	l->push_front(9);
	l->push_tail(-3);
	
	//Delete Nodes
	l->delete_front();
	l->delete_tail();
	
	//Print List
	l->print();
	
 return 0;
}
