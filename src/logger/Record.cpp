#include "Record.hpp"

Record::Record(std::string content, int type) :
content(content), type(type)
{
}

std::string Record::getContent()
{
    return this->content;
}

int Record::getType()
{
    return this->type;
}