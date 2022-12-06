#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <set>
#include <map>
//N = number of nodes
class min_heap
{
public:
	struct node
	{
		unsigned long date;
		std::string date_string;
		std::string crime;
		std::string area;
		std::string sex;
		std::string race;
		std::string age;
		node* parent;
	};
	void add_node(std::string const&, 
		std::string const&, std::string const&,
		std::string const&, std::string const&, std::string const&);
	std::set<node*> search_by_date(std::string const&);
	void heapify_down_recursive(long);
	node* get_root() {return arr.at(0);}
	void display_data(node*);

private:
	int size = 0;
	std::vector<node*> arr;
	std::map<std::string, int> crimes_occurrences;
};

//O(log(N))
void min_heap::add_node(std::string const& date, std::string const& area, std::string const& crime, std::string const& age,
	std::string const& sex, std::string const& race)
{
	node* n = new node;
	//n->date = date;
	n->date = stol(date);
	n->date_string = date;
	n->crime = crime;
	n->area = area;
	n->sex = sex;
	n->race = race;
	n->age = age;
	arr.push_back(n);
	arr.at(arr.size() - 1)->parent = arr.at((arr.size() - 1) / 12);
	heapify_down_recursive(arr.size()-1);
	size++;

}
//O(log(N))
void min_heap::heapify_down_recursive(long child)
{
	/*
	* pass in child and parent indexes (for the first call, this can be whatever)
	* calculate parent index by dividing child by k
	* check which one is greater (arr.at(child)< arr.at(parent))
	* if parent is greater, we need to swap
	* now, arr.at(parent) should contain our inserted value, arr.at(child) should contain
	* our previous parent
	* pass in child and parent recursively
	*/
	if (child != 0)
	{
		long parent = (child - 1) / 12;
		if (arr.at(child)->date < arr.at(parent)->date) //we need to swap
		{
			std::swap(arr.at(child), arr.at(parent));
			arr.at(arr.size() - 1)->parent = arr.at((arr.size() - 1) / 12);
			//arr.at(child) is now our parent
			//arr.at(parent) is now our child
		}
		heapify_down_recursive(parent); //our new parent
	}

}
void min_heap::display_data(node* n)
{
	std::cout << "Date: " << n->date << std::endl;
	std::cout << "Area: " << n->area << std::endl;
	std::cout << "Crime: " << n->crime << std::endl;
	std::cout << "Age of victim: " << n->age << std::endl;
	std::cout << "sex of victim: " << n->sex << std::endl;
	std::cout << "race of victim: " << n->race << std::endl;
	std::cout << std::endl;
}
//O(N)
std::set<min_heap::node*> min_heap::search_by_date(std::string const& date)
{
	std::set<node*> s;
	std::vector<node*> crimes;
	for (int i = 0; i < size; i++)
	{
		if (arr.at(i)->date_string.substr(4,7) == date)
		{
			s.emplace(arr.at(i));
		}
	}
	return s;
}