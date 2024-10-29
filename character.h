//
// Created by shaon on 3/18/2024.
//

#ifndef MAJIANG_CHARACTER_H
#define MAJIANG_CHARACTER_H
#include <iostream>
#include <string>
#include <vector>
#include "block.h"

using namespace std;
class Character{
public:
    Character(const string &name, const int base)
    {
        this -> name = name;
        this -> base = base;
        cout << "Character " << name << " Your Base Score is: " << base << endl;
    };


private:
    string name;
    int base;
    vector<block> hand;
};



#endif //MAJIANG_CHARACTER_H
