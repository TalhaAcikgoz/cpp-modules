#include "harl.hpp"

void    harl::complain(std::string level) {
    this->_level = level;
    switch (level.at(0))
    {
    case 'd':
        this->debug();
        break;
    case 'i':
        this->info();
        break;
    case 'w':
        this->warning();
        break;
    case 'e':
        this->error();
        break;
    default:
        std::cout << "wrong input";
        break;
    }

}

void    harl::debug(void) {

    std::cout << (this->_level.compare("debug") ? "wrong input" : "7XL-çift peynirli-üçlü turşu-özel-ketçaplı burgerime fazladan domuz pastırması yemeyi seviyorum. Gerçekten seviyorum!") << std::endl;
}

void    harl::info(void) {
    std::cout << (this->_level.compare("info") ? "wrong input" : "Ekstra domuz pastırması eklemenin daha fazla paraya mal olduğuna inanamıyorum. Burgerime yeterince pastırma koymadınız! Yapsaydınız, daha fazlasını istemezdim!") << std::endl;
}

void    harl::warning(void) {
    std::cout << (this->_level.compare("warning") ? "wrong input" : "Bence bedavaya fazladan pastırma yemeyi hak ediyorum. Ben yıllardır geliyorum, sen geçen aydan beri burada çalışmaya başladın.!") << std::endl;
}

void    harl::error(void) {
    std::cout << (this->_level.compare("error") ? "wrong input" : "Bu kabul edilemez! Şimdi müdürle konuşmak istiyorum.") << std::endl;
}