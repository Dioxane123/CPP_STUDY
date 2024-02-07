#include <iostream>
#include "match.h"
using namespace std;
int main(){
    char *s = new char[100], ch;
    cout << "Please input a string: " << endl;
    cin.getline(s, 100); 
    cout << s << endl;
    cout << "Please input a character: " << endl;
    cin >> ch;
    const char *p = match(s, ch);
    if (p == nullptr){
        cout << "Not found" << endl;
    }else{
        cout << p << endl;
    }
    return 0;
}