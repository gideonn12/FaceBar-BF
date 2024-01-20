#include "HashNo2.h"
#include <string>
using namespace std;

HashNo2::HashNo2(){}

void HashNo2:: hashing(string url){
    size_t hashed = std::hash<string>()(url);
    size_t hashed = std::hash<string>()(to_string(hashed));
    this->s_hashed_value = hashed;
    this->i_hashed_value = hashed;
}