#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class weapon {
public:
    weapon();
    weapon(std::string _type);
    ~weapon();
    void    setType(std::string _type);
    const std::string getType(void) const ;
private:
    std::string type;


};

#endif