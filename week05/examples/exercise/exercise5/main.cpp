#include <iostream>
#include "stuinfo.hpp"
using namespace std;

int main(){
    int n;
    cout << "Please input the number of students: ";
    cin >> n;
    stuinfo stu[n];
    inputstu(stu, n);
    showstu(stu, n);
    return 0;
}