#pragma once

#include <vector>
#include <string>

class TranspilerList
{
private:
    std::vector<std::string> list;
public:
    void add(std::string file);
};