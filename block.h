//
// Created by shaon on 10/29/2024.
//

#ifndef BLOCK_H
#define BLOCK_H
#include <iostream>
#include <string>
#include <vector>
#define MAX_BLOCK 27
using namespace std;
class block
{
public:
    block(const int blockID, const int amount)
    {
        this -> blockID = blockID;
        this -> amount = amount;
    }
    void initializeBlock()
    {
        amount = 4;
    }
    void removeBlock()
    {
        amount--;
    }
    int getBlockID() const
    {
        return blockID;
    }
    int getAmount() const
    {
        return amount;
    }
    int drawBlock()
    {
        amount--;
        return blockID;
    }

private:
    int blockID;
    int amount;
};

extern string blockName[3];
extern vector<block> initializeBlocks();
extern void printBlocks(const vector<block> &blocks);
extern int drawBlock(vector<block> &blocks);
#endif //BLOCK_H
