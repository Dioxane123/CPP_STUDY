#include <iostream>
#define SIZE 5
void sum(int(&pa)[SIZE], int(&pb)[SIZE], int);
int main(){
    int a[SIZE] = {10, 20, 30, 40, 50};
    int b[SIZE] = {1, 2, 3, 4, 5};
    std::cout << "Before calling the function, the contents of 'a' are: " << std::endl;
    for(int i = 0; i < SIZE; i++){
        std::cout << a[i] << " ";
    }
    sum(a, b, SIZE);

    std::cout << "\nAfter calling the function, the contents of 'a' are: " << std::endl;
    for(int i = 0; i < SIZE; i++){
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

void sum(int (&pa)[SIZE], int (&pb)[SIZE], int n){
    for(int i = 0; i < n; i++){
        pa[i] += pb[i];
    }
}