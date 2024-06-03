#include "blockchain.h"

void BlockChain::createGenesisBlock()
{
    // Genesis block dummy transaction data
    std::list<Transaction> transactionList =
        {
            // senderId, receiverId, amount
            Transaction("Genesis", "Genesis", 0)};

    // previous block hash, current transactions
    chain.push_back(Block("0", transactionList));
}

BlockChain::BlockChain()
{
    createGenesisBlock();
}

void BlockChain::addBlock(std::list<Transaction> transaction)
{
    chain.push_back(Block(getLatestBlock().getHash(), transaction));
}

std::vector<Block> BlockChain::getChain()
{
    return chain;
}

Block BlockChain::getLatestBlock()
{
    return chain[chain.size() - 1];
}

int BlockChain::isChainValid()
{
    if (chain[0].getHash() != chain[0].generateHash())
    {
        return 0;
    }

    for (int i = 1; i < chain.size(); i++)
    {
        if (chain[i].getHash() != chain[i].generateHash() ||
            chain[i - 1].getHash() != chain[i].getPreHash())
        {
            return -i;
        }
    }
    return 1;
}

void BlockChain::printChain()
{
    for (int i = 0; i < chain.size(); i++)
    {
        Block block = chain[i];
        std::cout << "\n\nBlock ################################################\n";
        std::cout << "Transactions:-\n--------------\n";

        for (Transaction t : block.getTransactionList())
        {
            std::cout << t.toString() << std::endl;
        }

        std::cout << "---------------------------------------\n";
        std::cout << "Block Hash Stored: " << block.getHash() << std::endl;
        std::cout << "Previous Hash: " << block.getPreHash() << "\n\n";
    }
}

void BlockChain::validationReport()
{
    int index = isChainValid();
    switch (index)
    {
    case 1:
        std::cout << "Chain is Valid\n";
        break;
    case 0:
        std::cout << "Genesis Block is Tampered!\n";
        break;
    default:
        std::cout << "Block " << abs(index) << " is Tampered!\n";
    }
}