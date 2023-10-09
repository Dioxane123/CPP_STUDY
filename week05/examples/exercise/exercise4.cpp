#include <iostream>
using namespace std;
int main(){
    int *p = new int[5]();
    for (int i = 0; i < 5; i++){
        cin >> *(p + i);
    }
    for (int i = 4; i >= 0; i--){
        cout << *(p + i) << " ";
    }
    delete []p;
    return 0;
}