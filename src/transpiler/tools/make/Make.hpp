#pragma once

#include <string>
#include "../TranspilerList.hpp"
#include "../../php/Version.hpp"
#include "../../io/File.hpp"
#include "../../logger/Logger.hpp"
#include "../../logger/Record.hpp"
#include "../../debug/Debug.hpp"

/**
 * Tool for transpiler
 * @see examples/make
 **/
class Make
{
private:
    File config;
    TranspilerList list;
    Version version;

    std::string pathToMake;
public:
    Make();
    ~Make();
    void parseConfig();
    TranspilerList getTranspilerList();
    Version getVersion();
    File* getConfig();
    void setPathToConfig(std::string path);
    void loadTranspilerList(TranspilerList list);
};