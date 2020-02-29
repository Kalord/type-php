#pragma once

#include <string>

#define SUCCESS 1
#define ERROR 2

class Record
{
private:
    std::string content;
    int type;
public:
    Record(std::string content, int type);

    std::string getContent();
    int getType();
};