#pragma once
#include "Node_Doppio.h"

class List{
	
	private:
		
		Node *head;
		Node *tail;
	public:
	
		List(){
			
			head=NULL;
		}	
		
		void print(){
			
			Node *tmp;
			tmp=head;
			
			while(tmp!=NULL){
				
				cout<<"["<<tmp->getData()<<"]->";
				tmp=tmp->getNext();
			}
			
			cout<<"["<<"NULL"<<"]"<<endl;
		}
		
		void push_front(int data){
			
			Node *new_node;
			new_node=new Node(data,head);
			head=new_node;
		}
		
		void push_tail(int data){
			
			if(head==NULL){
				
				this->push_front(data);
			}
			else{

				Node *tmp,*new_node;
				tmp=head;
				
				new_node=new Node(data);
				
				while(tmp->getNext()!=NULL){
					
					tmp=tmp->getNext();
				}
				
				new_node->setPrev(tmp);
				tmp->setNext(new_node);
				new_node->setNext(NULL);
			}
		}
		
		void delete_front(){
			
			Node *tmp,*tmp1;
			tmp=head;
			tmp1=tmp->getNext();
			delete tmp;
			tmp1->setPrev(head);
			head=tmp1;
				
		}
		
		void delete_tail(){
			
			if(head!=NULL){
			
				Node *tmp;
				tmp=new Node;
				tmp=head;
				
				while(tmp->getNext()->getNext()!=NULL){
					
					tmp=tmp->getNext();
				}
				
				delete tmp->getNext();
				tmp->setNext(NULL);
			}
			else if(head==NULL){
				
				head=NULL;
				cout<<"Empty List"<<endl;
			}
			
		}
		
		
		List* intersetion(List* l){
			
			Node *tmp,*tmp1,*ris;
			ris=new Node;
			tmp=head;
			tmp1=head;
			
			List *l_new;
			l_new=new List();
			
			while(tmp!=NULL){
				
				while(tmp1!=NULL){
		
				
					if(tmp->getData()==tmp1->getData()){
						
						l_new->push_front(tmp->getData());
					}
				}
			}
			
			return l_new;
		}
		
};
