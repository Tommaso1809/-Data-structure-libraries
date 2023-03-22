#pragma once
#include <iostream>
using namespace std;

class Node{
	
	private:
		
		Node* next;
		int data;
	
	public:
	
		Node(){
		
		}	
		
		Node(int data){
			
			this->data=data;
			this->next=NULL;
		}
		
		Node(int data,Node* next){
			
			this->data=data;
			this->next=next;
		}
		
		void setData(int data){
			
			this->data=data;
		}
		
		void setNext(Node* next){
			
			this->next=next;
		}
		
		int getData(){
			
			return data;
		}
		
		Node* getNext(){
			
			return next;
		}
		
		~Node(){
			
			
		}
};
