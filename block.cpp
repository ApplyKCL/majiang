//
// Created by shaon on 10/29/2024.
//

#include "block.h"

string blockName[3] ={
    "Tong",
    "Tiao",
    "Wan"
};
vector<block> initializeBlocks()
{
    vector<block> blocks;
    for(int i = 0; i < MAX_BLOCK; i++)
    {
        block newBlock(i, 4);
        blocks.push_back(newBlock);
    }
    return blocks;
}

void printBlocks(const vector<block> &blocks)
{
    int index = 0;
    for (auto block : blocks)
    {
        if(index % 9 == 0)
        {
            cout << blockName[block.getBlockID()/9]<<": ";
        }
        cout <<block.getBlockID()%9+1 <<": "<< block.getAmount()<<"\t";
        index ++;
        if(index % 9 == 0)
        {
            cout << endl;
        }

    }
}

extern int drawBlock(vector<block> &blocks)
{
    int blockID = rand() % MAX_BLOCK;
    while(blocks[blockID].getAmount() == 0)
    {
        blockID = rand() % MAX_BLOCK;
    }
    blocks[blockID].removeBlock();
    return blockID;
}