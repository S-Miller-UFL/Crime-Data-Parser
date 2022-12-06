#pragma once
#include <string>
#include <iostream>
#include "min_heap.h"
//H = number of heaps
template <typename T>
class linked_list
{
public:
	void add_heap(min_heap*);
	min_heap* find_heap(long const&);
private:
	struct node
	{
		min_heap* data;
		node* next = nullptr;
		node* prev = nullptr;
	};
	node* head=nullptr;
	node* tail=nullptr;
	int length = 0;
};

//Create a new Node at the front of the list to store the passed in parameter.
//O(1)
template<typename T>
void linked_list<T>::add_heap(min_heap* data)//const T& data)
{
	//allocate new head and tail
	node* new_Node = new node;
	//setting next Node to data
	new_Node->data = data;
	//Node checking
	if (head == nullptr)
	{
		head = new_Node;
		tail = head;
	}
	else
	{
		//setting prev data to new Node
		head->prev = new_Node;
		//setting next Node to head
		new_Node->next = head;
		//set head to new Node
		head = new_Node;
	}
	this->length = length + 1;
}

//O(H)
template <typename T>
min_heap* linked_list<T>::find_heap(long const& date)
{
	node* current = head;
	for (int i = 0; i < length; i++)
	{
		if (current->data->get_root()->date == date)
		{
			return current->data;
		}
		current = current->next;
	}
	return nullptr;

}

