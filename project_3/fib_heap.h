#pragma once
#include <set>
#include "linked_list.h"
#include "min_heap.h"
#include "indexer.h"
//H = number of heaps
class fib_heap
{
public:
	void add_node(std::string const& , std::string const&, std::string const& , std::string const& ,
        std::string const& , std::string const& );
	void add_heap(std::string const&, std::string const&, std::string const&, std::string const&,
		std::string const&, std::string const&);
	void get_crimes_year(std::string const&);
	min_heap* get_heap_by_year(std::string const&);
	indexer get_indexer() { return i; }
private:
	indexer i;
	linked_list<min_heap*> l;
};

/*
* min_heap* m = hash_table[hash(date_trunc)];//O(1))
* m->insert
*/
//add a node into our fib heap
//O(H+Log(N))
void fib_heap::add_node(std::string const& date, std::string const& area, std::string const& crime, std::string const& age,
    std::string const& sex, std::string const& race)
{
	std::string date_trunc = date.substr(4, 7);
	min_heap* m = l.find_heap(stoi(date_trunc)); //find the date heap O(H)
	if (m == nullptr)
	{
		add_heap(date, area, crime, age, sex, race); //there is no date, O(log(N))
	}
	else//O(log(N))
	{
		m->add_node(date, area, crime, age, sex, race);
	}
}

//add a new heap to our linked list
//O(log(N))
void fib_heap::add_heap(std::string const& date, std::string const& area, std::string const& crime, std::string const& age,
	std::string const& sex, std::string const& race)
{
	min_heap* m = new min_heap;
	l.add_heap(m);//O(1)
	std::string date_trunc = date.substr(4, 7);
	m->add_node("0000"+date_trunc, "xxx", "xxx", "xxx", "xxx", "xxx");
	m->add_node(date, area, crime, age, sex, race);//O(log(N))
}
void fib_heap::get_crimes_year(std::string const& date)
{
	std::set<min_heap::node*> crimes;
	min_heap* m = l.find_heap(stol("0000"+date));
	crimes = m->search_by_date(date);
	i.init_indexer(crimes);
}
//O(H)
min_heap* fib_heap::get_heap_by_year(std::string const& date)
{
	return l.find_heap(stol(date));
}
