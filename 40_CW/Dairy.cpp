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
	//Book.erase(d); - delete all events by date
	auto item = Book.find(d);
	if (item == Book.end()) {
		cout << "Not found Date" << endl;
	}
	else {
		int size = Book[d].size();
		if (n < 0 || n > size) {
			cout << "Not found event" << endl;
		}
		else {
			cout << "Event deleted " << Book[d][n] << " by " << d << endl;
			Book[d].erase(Book[d].begin() + n);
			if (Book[d].size() == 0) {
				Book.erase(d);
			}
			
		}
	}

}

void Dairy::showEventByDate(Date d) const&
{
	auto item = Book.find(d);
	if (item == Book.end()) {
		cout << "Not found Date" << endl;
	}
	else {
		cout << item->first << " " << endl;
		for (auto event : item->second) {  // vector events
			cout << "\t" << event << endl;
		}
	}
}

void Dairy::showEventByInfo(string info) const&
{
	for (auto item : Book) {
		for (int i = 0; i < item.second.size(); i++) {
			if (item.second[i] == info) {
				cout << "Date of event: " << item.first << endl;
				break;
			}
			
		}
	}
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
