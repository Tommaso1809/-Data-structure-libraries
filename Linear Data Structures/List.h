#pragma once
#include "Node.h"

class List{
	
	private:
		
		Node* head;
	
	public:
	
		List(){
			
			head=NULL;
		}
		
		Node* getHead(){
			
			return head;
		}
		
		void print(){
			
			Node *tmp;
			tmp=head;
			
			while(tmp!=NULL){
				
				cout<<"["<<tmp->getData()<<"]->";
				tmp=tmp->getNext();
			}
			
			cout<<"["<<"NULL"<<"]\n";
		}	
		
		void push_front(int data){
			
			Node *new_node;
			new_node=new Node(data,head);
			head=new_node;
		}
		
		void delete_front(){
			
			if(head==NULL){
				
				cout<<"Empty List\n";
			}
			else{
				Node *tmp,*tmp1;
				tmp=head;
				tmp1=tmp->getNext();
				delete tmp;
				head=tmp1;
			}
		}
		
		void push_tail(int data){
			
			if(head==NULL){
				
				this->push_front(data);
			}
			
			Node *new_node,*tmp;
			new_node=new Node(data);
			
			tmp=head;
			
			while(tmp->getNext()!=NULL){
				
				tmp=tmp->getNext();
			}
			
			tmp->setNext(new_node);
			
		}
		
		void delete_tail(){
			
			if(head!=NULL){
				if(head->getNext()!=NULL){
					Node *tmp;
					tmp = new Node;
					tmp = head;
					while(tmp->getNext()->getNext()!=NULL){
						tmp = tmp->getNext();
					}
				
					delete tmp->getNext();
					tmp->setNext(NULL);
				}
				else if(head->getNext()==NULL){
					head = NULL;
				}
			}
			else if(head==NULL){
				
				cout<<"Empty List\n";
			}
			
		}
		
		
};
