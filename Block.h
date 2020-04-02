#include<cstdint>
#include<iostream>
using namespace std;
   struct TransactionData{
       int amount;
       int deposit;
       int withdraw;

   };
   
    class Block
    {
        private:
        
      int amount;
      string n;
      int deposit;
      int withdraw;
      size_t prevHash;
      size_t blockHash;
      size_t generateHash(); 
    
      public:
      Block(int amount,int c,int w,TransactionData d,size_t prevHash );
      size_t getHash();
       
       TransactionData data;

      size_t getPreviousHash();

    };
    size_t Block::generateHash()
    {
     hash<string>hash1;
     hash<size_t>hash2;
     hash<size_t>finalHash;
     string toHash=to_string(data.withdraw)+to_string(data.deposit)+to_string(data.amount);
     return finalHash(hash1(toHash)+hash2(prevHash));

    }

    size_t Block::getHash()
    {
      return blockHash;
    }
    size_t Block::getPreviousHash()
    {
       return prevHash;
    }
    Block::Block(int a,int c,int w,TransactionData d,size_t prev)
    {
      data=d;
      amount=a;
     deposit=c;
      withdraw=w;

    }
  
