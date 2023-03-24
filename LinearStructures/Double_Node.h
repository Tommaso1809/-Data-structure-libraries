#pragma once
#include <iostream>
using namespace std;

template<typename T>
class Node{
	
	private:
		
		Node<T>* next;
		Node<T>* prev;
		T data;
	
	public:
	
		Node(){
		
		}	
		
		Node(T data){
			
			this->data=data;
			this->next=NULL;
			this->prev=NULL;
		}
		
		Node(T data,Node<T>* next){
			
			this->data=data;
			this->next=next;
			this->prev=prev;
		}
		
		void setData(T data){
			
			this->data=data;
		}
		
		void setNext(Node<T>* next){
			
			this->next=next;
		}
		
		void setPrev(Node<T>* prev){
			
			this->data=data;
		}
		
		T getData(){
			
			return data;
		}
		
		Node<T>* getNext(){
			
			return next;
		}
		
		Node<T>* getPrev(){
			
			return prev;
		}
		
		~Node(){
			
			
		}
};
