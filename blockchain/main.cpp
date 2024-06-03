#include <iostream>
#include <list>
#include "transaction.h"
#include "block.h"
#include "blockchain.h"

int main()
{

  BlockChain blockChain;

  // New list of transactions
  std::list<Transaction> transaction1 =
      {
          Transaction("User1", "User2", 2000),
          Transaction("User2", "User3", 1500),
          Transaction("User3", "User4", 2700)};

  // Add new Block
  blockChain.addBlock(transaction1);

  // another list
  std::list<Transaction> transaction2 =
      {
          Transaction("User1", "User2", 4000),
          Transaction("User2", "User3", 8600),
          Transaction("User3", "User4", 7300)};

  blockChain.addBlock(transaction2);

  blockChain.printChain();
  blockChain.validationReport();

  return 0;
}
