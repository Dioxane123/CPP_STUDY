#include <iostream>
#include <typeinfo>
using namespace std;

template<typename T1, typename T2>
T1 sum(T1 x, T2 y)
{
    cout << "The input type is " << typeid(T2).name() << endl;
    return x + y;
}

template<>
float sum<float, float>(float x, float y)
{
    cout << "6" << endl;
    return 6;
}
// Explicitly instantiate
// template double sum<double>(double, double);

int main()
{
    auto val = sum<float, float>(4, 5.4);
    cout << val << endl;
    return 0;
}
