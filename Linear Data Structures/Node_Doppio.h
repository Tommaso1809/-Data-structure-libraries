#pragma once
#include <iostream>
using namespace std;

class Node{
	
	private:
		
		Node* next;
		Node* prev;
		int data;
	
	public:
	
		Node(){
		
		}	
		
		Node(int data){
			
			this->data=data;
			this->next=NULL;
			this->prev=NULL;
		}
		
		Node(int data,Node* next){
			
			this->data=data;
			this->next=next;
			this->prev=prev;
		}
		
		void setData(int data){
			
			this->data=data;
		}
		
		void setNext(Node* next){
			
			this->next=next;
		}
		
		void setPrev(Node* prev){
			
			this->data=data;
		}
		
		int getData(){
			
			return data;
		}
		
		Node* getNext(){
			
			return next;
		}
		
		Node* getPrev(){
			
			return prev;
		}
		
		~Node(){
			
			
		}
};
