#include<iostream>
using namespace std;

class Demo{
    public:
    int num;
    void display(){
        cout << "The value of static int num is: " << num << endl;
    }
};

int main(){
    Demo obj1;
    obj1.display();
    return 0;
}