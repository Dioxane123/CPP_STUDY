#include "swap.hpp"
#include <iostream>
using namespace std;
int main(){
    int a = 1, b = 2;
    cout << "Before swap, a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swap, a = " << a << ", b = " << b << endl;
    return 0;
}
