#pragma once

#include <vector>

#include "Record.hpp"

class Logger
{
private:
    static inline Logger* instance = nullptr;
    Logger() {}

    std::vector<Record> records;
public:
    static Logger* getInstance();
    static void freeInstance();
    
    void addRecord(Record record);
    bool existsError();
    int countError();

    std::vector<Record> getRecords();
};