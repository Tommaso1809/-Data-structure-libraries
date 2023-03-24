#pragma once
#include "../LinearStructures/Node.h"

template<typename T>

class Queue{
	
	private:
		
		Node<T>* front;
	public:
		
		Queue(){
			
			front=NULL;
		}	
		
		void dequeue(){
			
			if(front==NULL){
				
				cout<<"There aren't any Element\n";
			}
			else{
	
				Node<T>* tmp;
				Node<T>* tmp1;
				tmp=front;
				tmp1=tmp->getNext();
				delete tmp;
				front=tmp1;
			}
		}
		
		void enqueue(T data){
			
			Node<T>* tmp;
			tmp=front;
			
			Node<T>* newNode=new Node<T>(data);
			
			while(tmp->getNext()!=NULL){
				
				tmp=tmp->getNext();
			}
			
			tmp->setNext(newNode);
		}
		
		
		void print(){
			
			Node<T>* tmp;
			tmp=front;
			
			while(tmp!=NULL){
				
				cout<<"["<<tmp->getData()<<"]->\t";
				tmp=tmp->getNext();
			}
			
			cout<<"["<<"NULL"<<"]\n";
		}
		
};
