#pragma once
#include <string>
#include <set>
#include <map>
class indexer
{
public:
	void init_indexer(std::set<min_heap::node*>& c) 
	{ 
		crimes = c;
	};
	void most_common_crime();
	void most_common_victim();
	void most_common_area();
	void most_common_age();
private:
	std::set<min_heap::node*> crimes;
	std::map<std::string, int> m;
};
//Best/Worst:O(1)/O(Nlog(N)+N)
void indexer::most_common_crime()
{
	//O(Nlog(N)))
	for (auto it = crimes.begin(); it != crimes.end(); it++) //O(N)
	{
		if (m.count((*it)->crime) == 0)
		{
			m.emplace((*it)->crime,1); //O(log(N))
		}
		else
		{
			auto j = m.find((*it)->crime);//O(log(N))
			j->second = j->second++;
		}
	}
	int b = 0;
	std::string c = "";
	//O(N)
	for (auto it = m.begin(); it != m.end(); it++)//O(N)
	{
		if (it->second > b)
		{
			c = it->first;
			b = it->second;
		}
	}
	std::cout << "most common crime was: " << c << std::endl;
	m.clear();
}
//Best/Worst:O(1)/O(Nlog(N)+N)
void indexer::most_common_victim()
{
	//O(Nlog(N)))
	for (auto it = crimes.begin(); it != crimes.end(); it++) //O(N)
	{
		if (m.count((*it)->race) == 0)
		{
			m.emplace((*it)->race, 1); //O(log(N))
		}
		else
		{
			auto j = m.find((*it)->race);//O(log(N))
			j->second = j->second++;
		}
	}
	int b = 0;
	std::string c = "";
	//O(N)
	for (auto it = m.begin(); it != m.end(); it++)//O(N)
	{
		if (it->second > b)
		{
			c = it->first;
			b = it->second;
		}
	}
	std::cout << "most common victim demographic was: " << c << std::endl;
	m.clear();
}
//Best/Worst:O(1)/O(Nlog(N)+N)
void indexer::most_common_area()
{
	//O(Nlog(N)))
	for (auto it = crimes.begin(); it != crimes.end(); it++) //O(N)
	{
		if (m.count((*it)->area) == 0)
		{
			m.emplace((*it)->area, 1); //O(log(N))
		}
		else
		{
			auto j = m.find((*it)->area);//O(log(N))
			j->second = j->second++;
		}
	}
	int b = 0;
	std::string c = "";
	//O(N)
	for (auto it = m.begin(); it != m.end(); it++)//O(N)
	{
		if (it->second > b)
		{
			c = it->first;
			b = it->second;
		}
	}
	std::cout << "most common area of crime was: " << c << std::endl;
	m.clear();
}
//Best/Worst:O(1)/O(Nlog(N)+N)
void indexer::most_common_age()
{
	//O(Nlog(N)))
	for (auto it = crimes.begin(); it != crimes.end(); it++) //O(N)
	{
		if (m.count((*it)->age) == 0)
		{
			m.emplace((*it)->age, 1); //O(log(N))
		}
		else
		{
			auto j = m.find((*it)->age);//O(log(N))
			j->second = j->second++;
		}
	}
	int b = 0;
	std::string c = "";
	//O(N)
	for (auto it = m.begin(); it != m.end(); it++)//O(N)
	{
		if (it->second > b)
		{
			c = it->first;
			b = it->second;
		}
	}
	std::cout << "most common age of victim was: " << c << std::endl;
	m.clear();
}