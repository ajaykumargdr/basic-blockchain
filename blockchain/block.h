#ifndef BLOCK_H
#define BLOCK_H
#include <iostream>
// #include <openssl/sha.h>
#include <list>
#include <iomanip>
#include "transaction.h"

class Block
{
private:
  std::string blockHash;
  std::string preBlockHash;
  std::list<Transaction> transactionList; // linked list representation

public:
  // Constructor
  Block(std::string preBlockHash, std::list<Transaction> transactionList);

  // SHA256 Hashing
  std::string generateHash();

  // Getter methods
  std::string getHash();
  std::string getPreHash();
  std::list<Transaction> getTransactionList();
};

#endif