#pragma once
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include "fib_heap.h"
#include "hash_table.h"
fib_heap* load_fib_heap()
{
	std::string date;
	std::string area;
	std::string crime;
	std::string age;
	std::string sex;
	std::string race;
	std::string input;
	std::ifstream file("Crime_Data_from_2010_to_2017_simplified.csv");
	fib_heap* f = new fib_heap;
	while (getline(file, input))
	{
		std::istringstream stream(input);
		// 2b. Get the date
		getline(stream, date, ',');
		// 2c. Get the area
		getline(stream, area, ',');
		//get the crime
		getline(stream, crime, ',');
		//get the age
		getline(stream, age, ',');
		//get the sex
		getline(stream, sex, ',');
		//get the race
		getline(stream, race, ',');
		if (date.size() == 7)
		{
			date = "0" + date;
		}
		f->add_node(date, area, crime, age, sex, race);
	}
	file.close();
	return f;
}
hash_table* load_hash_table()
{
	std::string date;
	std::string area;
	std::string crime;
	std::string age;
	std::string sex;
	std::string race;
	std::string input;
	std::ifstream file("Crime_Data_from_2010_to_2017_simplified.csv");
	hash_table* h = new hash_table;
	while (getline(file, input))
	{
		std::istringstream stream(input);
		// 2b. Get the date
		getline(stream, date, ',');
		// 2c. Get the area
		getline(stream, area, ',');
		//get the crime
		getline(stream, crime, ',');
		//get the age
		getline(stream, age, ',');
		//get the sex
		getline(stream, sex, ',');
		//get the race
		getline(stream, race, ',');
		if (date.size() == 7)
		{
			date = "0" + date;
		}
		h->add_node(date, area, crime, age, sex, race);
	}
	file.close();
	return h;
}
