#include <iostream>
using namespace std;

int main(){
    char *pc, cc = 'A';
    int *pi, ii = 10;
    float *pf, ff = 23.4f;
    double *pd, dd = 123.78f;

    pc = &cc;
    pi = &ii;
    pf = &ff;
    pd = &dd;

    cout << "sizeof(pc) = " << sizeof(pc) << ",sizeof(cc) = " << sizeof(cc) << endl;
    cout << "sizeof(pi) = " << sizeof(pi) << ",sizeof(ii) = " << sizeof(ii) << endl;
    cout << "sizeof(pf) = " << sizeof(pf) << ",sizeof(ff) = " << sizeof(ff) << endl;
    cout << "sizeof(pd) = " << sizeof(pd) << ",sizeof(dd) = " << sizeof(dd) << endl;

    cout << "&pc = " << &pc << ",pc = " << static_cast<void *>(pc) << ", *pc = " << *pc << endl;
    cout << "&pi = " << &pi << ",pi = " << pi << ", *pi = " << *pi << endl;
    cout << "&pf = " << &pf << ",pf = " << pf << ", *pf = " << *pf << endl;
    cout << "&pd = " << &pd << ",pd = " << pd << ", *pd = " << *pd << endl;

    const char *msg = "C/C++, haha.";
    const char *copy;

    copy = msg;

    cout << "msg = " << msg << ",its address = " << (void*)msg << ",&msg = " << &msg << endl;
    cout << "copy = " << copy << ",its address = " << (void*)copy << ",&copy = " << &copy << endl;

    return 0;

}