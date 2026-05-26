#pragma once
#include<string>
#include"Date.h"
#include<vector>
#include<map>
#include<iostream>
using namespace std;
#define dateWindows 1
class Forum
{
	map<string, string> users;
	vector < string > signInUsers;

public:
	Forum();

	void signUp(string login, string password);
	void showUsers()const;

};

