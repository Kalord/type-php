#include "Logger.hpp"

Logger* Logger::getInstance()
{
    if(instance == nullptr) instance = new Logger();
    return instance;
}

void Logger::freeInstance()
{
    if(instance != nullptr) delete instance;
}

void Logger::addRecord(Record record)
{
    this->records.push_back(record);
}

bool Logger::existsError()
{
    for(auto record : this->records)
    {
        if(record.getType() == ERROR) return true;
    }
    return false;
}

int Logger::countError()
{
    int counter = 0;
    for(auto record : this->records)
    {
        if(record.getType() == ERROR) counter++;
    }
    return counter;
}

std::vector<Record> Logger::getRecords()
{
    return this->records;
}