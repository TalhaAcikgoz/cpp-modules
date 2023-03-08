#pragma once

#include <iostream>
#include <string>

class weapon {
private:
    std::string _type;
public:
    weapon(std::string type);
    ~weapon();
    std::string getType(void) const;
    void    setType(std::string type);
};