#include "transaction.h"

Transaction::Transaction() {}

Transaction::Transaction(std::string senderKey, std::string receiverKey, double amount)
{
  this->senderKey = senderKey;
  this->receiverKey = receiverKey;
  this->amount = amount;
  this->timestamp = time(nullptr);
}

std::string Transaction::toString()
{
  return senderKey + " " + receiverKey + " " +
         std::to_string(amount) + " " + std::to_string(timestamp);
}