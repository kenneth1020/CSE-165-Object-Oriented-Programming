#ifndef STACK_H
#define STACK_H

#include <iostream>

struct Stack
{
	struct Link
	{
		void *data;
		Link *next;

		void initialize(void *dat, Link *nxt)
		{
			data = dat;
			next = nxt;
		}
	} * head;

	//A pointer that will follow to function prototype
	void (*deletecb)(void *pt);

	void initialize()
	{
		head = 0;
		//Give the pointer to the function make it default of 0 
		deletecb = 0;
	}

	void push(void *dat)
	{
		Link *newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
	}

	void *peek()
	{
		if (head == 0)
		{
			std::cout << "Stack is empty";
		}
		return head->data;
	}

	void *pop()
	{
		if (head == 0)
			return 0;

		void *result = head->data;
		Link *oldHead = head;
		head = head->next;
		delete oldHead;
		return result;
	}

	//Add a memeber function to set this pointer 
	void setDeleteCallback(void (*delcb)(void *pt))
	{
		deletecb = delcb;
	}

	void cleanup()
	{
		//Just like pop we check if the deletecb is empty or not
		if (deletecb != 0)
		{
			//If it is not empty then we proceed in the deleting everything. 
			//Until Head is 0
			while (head != 0)
			{
				//calling the deletecb which is set to a function and 
				//put into the head of the function. Til it is 0
				deletecb(pop());
			}
		}
		if (head == 0){
			std::cout << "Stack is empty";
		}
		else {
			std::cout << "Stack is not empty";
		}
		
	}
};
#endif