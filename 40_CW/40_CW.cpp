// 40_CW.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>
#include "Dairy.h"
using namespace std;


int main()
{
    /*
    string text;
    map<string, int> words;
    while (text != "stop") {
        cout << "Input word1: ";
        cin >> text;
        if(words.find(text) == words.end()){
            words[text] = 1;
        }
        else {
            words[text]++;
        }
    }
    map<string, int>::iterator item;
    for (item = words.begin(); item != words.end(); item++) {
        cout << (*item).first << " " << (*item).second << endl;
    }
    */

    Dairy Pavlo;
    Pavlo.showAllEvents();

    return 0;
}

