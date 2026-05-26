#pragma once
#include<string>
#include"Date.h"
#include<vector>
#include<map>
#include<iostream>
using namespace std;

class Dairy
{
	map<Date, vector<string>> Book;
public:
	Dairy();
	
	void addEvent(Date d, string info);

	void delEvent(Date d, int n);

	void showEventByDate(Date d)const&;

	void showEventByInfo(string info)const&;

	void showAllEvents()const&;
};

