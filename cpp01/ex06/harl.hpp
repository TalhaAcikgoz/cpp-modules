#pragma once

#include <iostream>
#include <string>

class harl {
public:
    std::string _level;
    void    complain(std::string level);
private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
};