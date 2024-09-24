//
// Created by Pascal Charpentier on 2024-09-24.
//

#ifndef EXERCICES_CHAP_3_SOLUTION_STRING_UTILS_H
#define EXERCICES_CHAP_3_SOLUTION_STRING_UTILS_H

#include <sstream>
#include <string>
#include <vector>
#include <stack>

std::vector<std::string> exploserString(const std::string& text, char del = ' ') ;
std::string assemblerString(const std::vector<std::string>& mots, char del = ' ') ;
std::string inverserMots(const std::string& text) ;
bool estUnPalindrome(const std::string& mot) ;
#endif //EXERCICES_CHAP_3_SOLUTION_STRING_UTILS_H
