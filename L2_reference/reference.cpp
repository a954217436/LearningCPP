#include <iostream>

using namespace std;


int main()
{
    int i = 0;
    cout << "size of i:" << sizeof(i) << endl;

    //int* p：    *靠近int容易理解，表示p是一个int指针型变量
    int* p = &i;
    cout << "size of p: " << sizeof(p) << endl;

    //int& r：    r是i的引用，编译器底层靠指针实现，但是给出假象是: r和i大小相同且地址相同
    //int& r;    //引用初始化必须要赋值，该行错误
    int& r = i;
    cout << "size of r: " << sizeof(r) << endl;
    cout << "&r: " << &r << " &i：" << &i << endl;

    //引用一旦确定，不能再改，所谓 “烈女不侍二夫”
    //r = j，表示j赋值给r，因为r代表i，因此i也被赋值
    int j = 5;
    r = j;
    cout << "i: " << i << " r: " << r << endl;

    int& r2 = r;
    cout << "r2: " << r2;

    return 0;
}