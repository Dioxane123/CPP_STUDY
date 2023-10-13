#include <iostream>
using namespace std;
inline void create_array(int * arr, int size){
    for(int i = 0; i < size; i++){
        arr[i] = i * 10;
    }    
}

int main(){
    int len = 16;
    int *ptr = new int[len];
    create_array(ptr, len);
    for(int i = 0; i < len; i++)
        cout << ptr[i] << " ";
    return 0;
}