#include "block.h"

Block::Block(std::string preBlockHash, std::list<Transaction> transactionList)
{
    this->preBlockHash = preBlockHash;
    this->transactionList = transactionList;
    this->blockHash = generateHash();
}

std::string Block::generateHash()
{
    std::string message = preBlockHash;

    // Fetching transaction data
    for (Transaction transaction : transactionList)
    {
        message += transaction.toString();
    }

    // Hashing the message

    std::hash<std::string> hasher;

    return std::to_string(hasher(message));
}

std::string Block::getHash()
{
    return (std::string)this->blockHash;
}

std::string Block::getPreHash()
{
    return this->preBlockHash;
}

std::list<Transaction> Block::getTransactionList()
{
    return this->transactionList;
}
