#include "Dairy.h"

Dairy::Dairy()
{
	Book[Date()].push_back("C++");
	Book[Date()].push_back("Home work");
	Book[Date(2026, 12, 31)].push_back("New year");
	Book[Date() + 2].push_back("C++");
	Book[Date() -1 ].push_back("C++");
	Book[Date() -1 ].push_back("Home work");
}

void Dairy::addEvent(Date d, string info)
{
	Book[d].push_back(info);
}

void Dairy::delEvent(Date d, int n)
{
}

void Dairy::showEventByDate(Date d) const&
{
}

void Dairy::showEventByInfo(string info) const&
{
}

void Dairy::showAllEvents() const&
{
	for (auto item : Book) {
		cout << item.first << endl;
		for (int i = 0; i < item.second.size(); i++) {
			cout << "\t" << i + 1 << ". " << item.second[i] << endl;
		}
		cout << endl;
	}
}
