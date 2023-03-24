#pragma once
#include <iostream>
using namespace std;

template<typename T>
class Node{
	
	private:
		
		Node<T>* next;
		T data;
	
	public:
	
		Node(){
		
		}	
		
		Node(T data){
			
			this->data=data;
			this->next=NULL;
		}
		
		Node(T data,Node<T>* next){
			
			this->data=data;
			this->next=next;
		}
		
		void setData(T data){
			
			this->data=data;
		}
		
		void setNext(Node<T>* next){
			
			this->next=next;
		}
		
		int getData(){
			
			return data;
		}
		
		Node<T>* getNext(){
			
			return next;
		}
		
		~Node(){
			
			
		}
};
