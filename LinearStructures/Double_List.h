#pragma once
#include "Double_Node.h"

template<typename T>
class List{
	
	private:
		
		Node<T> *head;
		Node<T> *tail;
	public:
	
		List(){
			
			head=NULL;
		}	
		
		void print(){
			
			Node<T> *tmp;
			tmp=head;
			
			while(tmp!=NULL){
				
				cout<<"["<<tmp->getData()<<"]->";
				tmp=tmp->getNext();
			}
			
			cout<<"["<<"NULL"<<"]"<<endl;
		}
		
		void push_front(T data){
			
			Node<T> *new_node;
			new_node=new Node<T>(data,head);
			head=new_node;
		}
		
		void push_tail(T data){
			
			if(head==NULL){
				
				this->push_front(data);
			}
			else{

				Node<T> *tmp,*new_node;
				tmp=head;
				
				new_node=new Node<T>(data);
				
				while(tmp->getNext()!=NULL){
					
					tmp=tmp->getNext();
				}
				
				new_node->setPrev(tmp);
				tmp->setNext(new_node);
				new_node->setNext(NULL);
			}
		}
		
		void delete_front(){
			
			Node<T> *tmp,*tmp1;
			tmp=head;
			tmp1=tmp->getNext();
			delete tmp;
			tmp1->setPrev(head);
			head=tmp1;
				
		}
		
		void delete_tail(){
			
			if(head!=NULL){
			
				Node<T> *tmp;
				tmp=new Node<T>;
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
		
		
		List<T>* intersetion(List<T>* l){
			
			Node<T> *tmp,*tmp1,*ris;
			ris=new Node<T>;
			tmp=head;
			tmp1=head;
			
			List<T> *l_new;
			l_new=new List<T>();
			
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
