#include<iostream>

typedef struct stuinfo{
    std::string name;
    int age;
}stuinfo;

template<typename T>
int compare(const T &a, const T &b){
    if(a > b){
        return 1;
    } else if(a < b){
        return -1;
    } else {
        return 0;
    }
}

template<>
int compare<stuinfo>(const stuinfo &a, const stuinfo &b){
    if(a.age > b.age){
        return 1;
    } else if(a.age < b.age){
        return -1;
    } else {
        return 0;
    }
}

int main(){
    int a1 = 15, b1 = 12;
    char a2 = 'a', b2 = 'b';
    float a3 = 5.3, b3 = 5.3;
    stuinfo a4 = {"John", 20}, b4 = {"Doe", 25};

    std::cout << compare(a1, b1) << std::endl;
    std::cout << compare(a2, b2) << std::endl;
    std::cout << compare(a3, b3) << std::endl;
    std::cout << compare(a4, b4) << std::endl;

    return 0;
}