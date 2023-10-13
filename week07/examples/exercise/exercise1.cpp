#include <iostream>
using namespace std;
const char* match(const char* s, const char ch){
    while(*s != '\0'){
        if(*s == ch){
            return s;
        }
        s++;
    }
    return nullptr;
}
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