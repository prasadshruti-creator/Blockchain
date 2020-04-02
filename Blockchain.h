# include<iostream>
# include<cstdint>
#include<vector>
# include "Block.h"
using namespace std;

class Blockchain
{
 private:
 Block createGenesisBlock();
 // public chain
 
 public:
vector<Block> chain;
Blockchain();
void addBlock(TransactionData data);
Block *getLatestBlock();
};
Blockchain::Blockchain()
{
 Block genesis=createGenesisBlock();
 chain.push_back(genesis);
}
void Blockchain::addBlock(TransactionData data )
{
int index=chain.size()-1;
Block newBlock(index,0,0,data,getLatestBlock()->getHash());
}
Block Blockchain::createGenesisBlock()
{
TransactionData d;
d.amount=0;
d.deposit=0;
d.withdraw=0;
hash<int>hash1;
Block genesis(0,0,0,d,hash1(0));
return genesis;
}
Block *Blockchain::getLatestBlock()
{
    return &chain.back();
}
