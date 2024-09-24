#include <iostream>
#include "string_utils.h"
#include <cassert>

int main() {
    std::string test = "allo je suis une string" ;
    assert(inverserMots(test) == "string une suis je allo ") ;
    assert(estUnPalindrome("laval")) ;
    assert(!estUnPalindrome("avala")) ;
    return 0;
}
