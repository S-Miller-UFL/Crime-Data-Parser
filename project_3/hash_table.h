#pragma once
#include "min_heap.h"
#include "indexer.h"
class hash_table
{
public:
	void add_node(std::string const&, std::string const&, std::string const&, std::string const&,
		std::string const&, std::string const&);
	void add_heap(std::string const&, std::string const&, std::string const&, std::string const&,
		std::string const&, std::string const&);
	void get_crimes_year(std::string const&);
	int hash(std::string const&);
	indexer get_indexer() { return in; }
private:
	indexer in;
	min_heap* table[8] = { nullptr };
};

//Best/Worst:O(1)/O(log(N))
void hash_table::add_node(std::string const& date, std::string const& area, std::string const& crime, std::string const& age,
	std::string const& sex, std::string const& race)
{
	if (table[hash(date)] == nullptr) //O(log(N))
	{
		add_heap(date, area, crime, age, sex, race);//make new minheap, insert at position according to hash
	}
	else
	{
		table[hash(date)]->add_node(date, area, crime, age, sex, race);//O(log(N))
		//minheap pointer
	}
}
//add a new heap to our hash table
//Best/Worst:O(1)/O(log(N))
void hash_table::add_heap(std::string const& date, std::string const& area, std::string const& crime, std::string const& age,
	std::string const& sex, std::string const& race)
{
	min_heap* m = new min_heap;
	table[hash(date)] = m; //O(1)
	std::string date_trunc = date.substr(4, 7);
	m->add_node("0000" + date_trunc, "xxx", "xxx", "xxx", "xxx", "xxx");//O(log(N))
	m->add_node(date, area, crime, age, sex, race);//O(log(N))
}
//Best/Worst:O(1)/O(N)
void hash_table::get_crimes_year(std::string const& date)
{
	std::set<min_heap::node*> crimes;
	min_heap* m = table[hash("0000"+date)];//O(1)
	crimes = m->search_by_date(date);//O(N)
	in.init_indexer(crimes);
}
//Best/Worst:O(1)
int hash_table::hash(std::string const& date)
{
	int date_trunc = stoi(date.substr(4, 7));
	return date_trunc % 2010;
}
