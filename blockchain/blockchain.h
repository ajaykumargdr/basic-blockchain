#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <iostream>
#include <vector>
#include <list>
#include "block.h"
#include "transaction.h"

class BlockChain
{

private:
  std::vector<Block> chain;
  void createGenesisBlock();

public:
  // constructor
  BlockChain();

  // new block insertion
  void addBlock(std::list<Transaction> transaction);

  // getters
  std::vector<Block> getChain();
  Block getLatestBlock();

  // validation
  int isChainValid();
  void validationReport();

  // printing
  void printChain();
};

#endif