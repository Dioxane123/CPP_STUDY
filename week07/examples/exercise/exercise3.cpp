#include <iostream>
using namespace std;

template<typename T>
bool vabs(T p, int n){
    if (p == nullptr || n <= 0){
        return false;
    }
    for(int i = 0; i < n; i++){
        if(p[i] < 0){
            p[i] *= -1;
        }
    }
    return true;
}

int main(){
    float arr[100]={-1.8, -2.5, 2, 3, 6}, n = 5;
    cout << vabs(arr, n) << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    } 
}