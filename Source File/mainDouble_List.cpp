#include"../LinearStructures/Double_List.h" 

int main(){
	
	//Integer type
	List<int>* l=new List<int>();
	
	//Insert of Nodes
	l->push_front(-9);
	l->push_tail(43);
	l->push_front(3);
	l->push_tail(25);
	
	//Delete Nodes
	l->delete_front();
	l->delete_tail();
	
	//Print of Nodes
	l->print();
}
