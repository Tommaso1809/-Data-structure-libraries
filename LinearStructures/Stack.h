#pragma once
#include "Node.h"

using namespace std;

template<typename T>
class Stack{
	
	private:
		Node<T>* top;
		
	public:
	
		Stack(){
			top=NULL;
		}	
		
		bool isEmpty(){
			
			if(top==NULL)
				return true;
			else
				return false;	
		}
		
		void push(T data){
			
			Node<T>* newNode;
			newNode=new Node<T>(data,top);
			top=newNode;	
		}
		
		void pop(){
			
			if(top==NULL){
				
				cout<<"	\nThere aren't any Nodes\n";
			}
			else{
				
				Node<T> *tmp,*tmp1;
				tmp=top;
				tmp1=tmp->getNext();
				delete tmp;
				top=tmp1;	
			}
		}
		
		void print(){
			
			Node<T>* tmp;
			tmp=top;
			
			while(tmp!=NULL){
				
				cout<<"| "<<tmp->getData()<<" |\n";
				tmp=tmp->getNext();
			}
		}
		
};
