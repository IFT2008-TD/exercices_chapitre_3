//
// Created by Pascal Charpentier on 2024-09-24.
//

#include "string_utils.h"

std::vector<std::string> exploserString(const std::string &text, char del) {
    std::stringstream ss(text) ;
    std::string mot ;
    std::vector<std::string> retval ;
    while (std::getline(ss, mot, del)) retval.push_back(mot) ;
    return retval ;
}

std::string assemblerString(const std::vector<std::string>& mots, char del) {
    std::ostringstream ss ;

    for (const auto& mot: mots) ss << mot << del ;
    return ss.str() ;

}

std::string inverserMots(const std::string& text) {
    std::stack<std::string> pile ;
    std::vector<std::string> retval ;
    for (const auto& mot: exploserString(text)) pile.push(mot) ;
    while (!pile.empty()) {
        retval.push_back(pile.top()) ;
        pile.pop() ;
    }
    return assemblerString(retval) ;
}
