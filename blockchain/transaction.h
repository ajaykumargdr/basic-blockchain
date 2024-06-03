#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include <iostream>
#include <ctime>

class Transaction
{
private:
    std::string senderKey;
    std::string receiverKey;
    double amount;
    time_t timestamp;

public:
    // Constructors
    Transaction();
    Transaction(std::string _senderKey, std::string _receiverKey, double _amount);

    // convert transaction data to string (for hashing purpose)
    std::string toString();
};

#endif