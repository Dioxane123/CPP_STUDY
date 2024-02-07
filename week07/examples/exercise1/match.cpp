#include <iostream>
#include "match.h"
using namespace std;
const char* match(const char* s, const char ch){
    if(s == nullptr){
        cout << "Invalid input!" << endl;
        return nullptr;
    }
    while(*s != '\0'){
        if(*s == ch){
            return s;
        }
        s++;
    }
    return nullptr;
}