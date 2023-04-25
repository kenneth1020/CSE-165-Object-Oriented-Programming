#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

struct Stack {
	struct Link {
		double data;
		Link* next;
		
		void initialize(double dat, Link* nxt){
			data = dat;
			next = nxt;
		}
	}* head;
	
	void initialize(){
		head = 0;
	}

	public:
		Stack(){
			head = NULL;
		}
		Stack(int n){
			double firstElement = 1.0;
			for(int i = 0; i < n; i++){
				push(firstElement);
				firstElement += 0.1;
			}
			/*for (int j = 0; j < n; j++)
			{
				//firstElement -= 0.1;
				cout << pop() << " ";
			}
			*/
		}
		~Stack(){
			if(head != 0){
				Link* firstElement = head;
				while(firstElement != NULL){
					cout << pop() << " ";
					firstElement = head;
				}
			}
		}
	
	void push(double dat){
		Link* newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
	}
	
	double peek(){
		if (head == 0){
			cout << "Stack is empty";
		}
		return head->data;
	}
	
	double pop(){
		if(head == 0)
			return 0;
		
		double result = head->data;
		Link* oldHead = head;
		head = head->next;
		delete oldHead;
		return result;
	}
	
	void cleanup(){
		if (head == 0){
			cout << "Stack is empty";
		}
		else {
			cout << "Stack is not empty";
		}
	}
};
#endif