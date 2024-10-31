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
    void initializeHand(vector<block> &blocks)
    {
        for(int i = 0; i < 13; i++)
        {
            int blockID = drawBlock(blocks);
            block newBlock(blockID, 1);
            hand.push_back(newBlock);
        }
    }
    void userDraw(vector<block> &blocks)
    {
        currentBlock = drawBlock(blocks);
    }
    int getCurrentBlock() const
    {
        return currentBlock;
    }


private:
    string name;
    int base;
    vector<block> hand;
    int currentBlock = 0;
};



#endif //MAJIANG_CHARACTER_H
