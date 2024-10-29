//
// Created by shaon on 3/18/2024.
//
#include <iostream>
#include <string>
#include <vector>
#include "character.h"
#include "block.h"

using namespace std;

int main(){
    char selection = ' ';
    vector<block> blocks = initializeBlocks();
    // printBlocks(blocks);
    // int newBlock = drawBlock(blocks);
    // cout << "New Block: " << blockName[newBlock/9] << " " << newBlock%9+1 << endl;
    // printBlocks(blocks);
    do
    {
        cout<<"N. Start a new game"<<endl;
        cout<<"X. End Game"<<endl;
        cin>>selection;

    }while(selection!='X' && selection!='x');

}