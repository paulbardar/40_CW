#include "Forum.h"

Forum::Forum()
{
	users["Diana"] = "12345";
	users["Pavlo"] = "Naruto";
}

void Forum::signUp(string login, string password)
{
	if (users.find(login) == users.end()) {
		users[login] = password;
		cout << "success: new user added" << endl;
	}
	else {
		cout << "fail: user already exists" << endl;
	}
}

void Forum::showUsers() const
{
	for (auto item : users) {
		cout << "Login: " << item.first << " " << "password: " << item.second << endl;
	}
}
