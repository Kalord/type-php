#pragma once

#include <string>
#include "../../TranspilerList.hpp"
#include "../../../io/File.hpp"
#include "../../../logger/Logger.hpp"

class MakeConfigParser
{
private:
    std::string keyWords[3] = {
        "TranspilerList",
        "Output",
        "Version"
    };
    TranspilerList list;
public:
    void parse(File file);
    TranspilerList getTranspilerList();
};