#pragma once

class Version
{
private:
    int minor;
    int major;
public:
    Version(int minor = 5, int major = 4);
};