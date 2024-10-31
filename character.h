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
        int currentBlock = drawBlock(blocks);
        for(auto hand : hand)
        {
            if(hand.getBlockID() == currentBlock)
            {
                hand.addBlock();
                return;
            }
        }
        block newBlock(currentBlock, 1);
        hand.push_back(newBlock);
    }
    void userDiscard()
    {
        cout << "Which block do you want to discard?" << endl;
        printHand();
        int discardBlock;
        cin >> discardBlock;
        for(auto hand : hand)
        {
            if(hand.getBlockID() == discardBlock)
            {
                hand.removeBlock();
                return;
            }
        }
    }

    void printHand()
    {
        cout << "Your Hand: ";
        for(auto block : hand)
        {
            cout << blockName[block.getBlockID()/9] << " " << block.getBlockID()%9+1 << " ";
        }
        cout << endl;
    }


private:
    string name;
    int base;
    vector<block> hand;
};



#endif //MAJIANG_CHARACTER_H
