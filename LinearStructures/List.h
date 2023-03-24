#pragma once
#include "Node.h"

template<typename T>
class List{
	
	private:
		
		Node<T>* head;
	
	public:
	
		List(){
			
			head=NULL;
		}
		
		Node<T>* getHead(){
			
			return head;
		}
		
		void print(){
			
			Node<T>* tmp;
			tmp=head;
			
			while(tmp!=NULL){
				
				cout<<"["<<tmp->getData()<<"]->";
				tmp=tmp->getNext();
			}
			
			cout<<"["<<"NULL"<<"]\n";
		}	
		
		void push_front(T data){
			
			Node<T> *new_node;
			new_node=new Node<T>(data,head);
			head=new_node;
		}
		
		void delete_front(){
			
			if(head==NULL){
				
				cout<<"Empty List\n";
			}
			else{
				Node<T> *tmp,*tmp1;
				tmp=head;
				tmp1=tmp->getNext();
				delete tmp;
				head=tmp1;
			}
		}
		
		void push_tail(T data){
			
			if(head==NULL){
				
				this->push_front(data);
			}
			
			Node<T> *new_node,*tmp;
			new_node=new Node<T>(data);
			
			tmp=head;
			
			while(tmp->getNext()!=NULL){
				
				tmp=tmp->getNext();
			}
			
			tmp->setNext(new_node);
			
		}
		
		void delete_tail(){
			
			if(head!=NULL){
				if(head->getNext()!=NULL){
					Node<T> *tmp;
					tmp = new Node<T>;
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
