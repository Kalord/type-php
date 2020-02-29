#pragma once

#include <string>
#include "../TranspilerList.hpp"
#include "../../php/Version.hpp"
#include "../../io/File.hpp"

/**
 * Tool for transpiler
 * @see examples/make
 **/
class Make
{
private:
    TranspilerList list;
    Version version;

    std::string pathToMake;

    void parseConfig();
public:
    Make(std::string pathToMake = "make.php");
    ~Make();
    TranspilerList getTranspilerList();
    Version getVersion();
};