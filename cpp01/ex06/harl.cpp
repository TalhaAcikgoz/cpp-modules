#include "harl.hpp"

void    harl::complain(std::string level) {
    this->_level = level;
    switch (level.at(0))
    {
    case 'd':
        std::cout << "[debug]" << std::endl;
        this->debug();
    case 'i':
        std::cout << "[info]" << std::endl;
        this->info();
    case 'w':
        std::cout << "[warning]" << std::endl;
        this->warning();
    case 'e':
        std::cout << "[error]" << std::endl;
        this->error();
        break;
    default:
        std::cout << "wrong input";
        break;
    }

}

void    harl::debug(void) {

    std::cout << "7XL-çift peynirli-üçlü turşu-özel-ketçaplı burgerime fazladan domuz pastırması yemeyi seviyorum. Gerçekten seviyorum!" << std::endl;
}

void    harl::info(void) {
    std::cout << "Ekstra domuz pastırması eklemenin daha fazla paraya mal olduğuna inanamıyorum. Burgerime yeterince pastırma koymadınız! Yapsaydınız, daha fazlasını istemezdim!" << std::endl;
}

void    harl::warning(void) {
    std::cout <<  "Bence bedavaya fazladan pastırma yemeyi hak ediyorum. Ben yıllardır geliyorum, sen geçen aydan beri burada çalışmaya başladın.!" << std::endl;
}

void    harl::error(void) {
    std::cout <<  "Bu kabul edilemez! Şimdi müdürle konuşmak istiyorum." << std::endl;
}