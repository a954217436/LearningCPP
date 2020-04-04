#include <iostream>

using namespace std;
int main()
{
    int h = 5;
    int *p = &h;
    cout << "Address of h : " << &h << endl;
    cout << "Value of p : " << p << endl;


    //警告：下面这么做是不对滴
    //在对指针解除引用之前，一定要将其初始化为一个确定的、适当的地址！！！！！！
    long* fellow;
    *fellow = 12345;
    cout << "Value of fellow : " << fellow << endl;

    //typeName* pointer_name = new typeName;
    int* pn1 = new int;
    *pn1 = 1001;
    cout << "Value of pn1 : " << pn1 << endl;
    cout << "Value of *pn1 : " << *pn1 << endl;

    //值为0的指针是空指针：Null pointer
    int *pe = 0;
    cout << "Value of pe : " << pe << endl;
    if(!pe)
    {
        cout << "pe is null!" << endl;
    }

    int *ps = new int;
    *ps = 8888;
    cout << "new ps value : " << ps << endl;
    cout << "new *ps value : " << *ps << endl;
    //...
    //delete会释放ps指向的内存，但不会删除ps本身
    delete ps;
    cout << "delete ps value : " << ps << endl;
    cout << "delete *ps value : " << *ps << endl;

    //delete 只能 释放使用 new 产生的内存
    //不要尝试释放已经释放的内存块
    //对空指针使用delete是安全的
    int *pt = new int;
    delete pt;    //ok
    //delete pt;    //not ok now
    int jugs = 5;
    int *pj = &jugs;
    //delete pj;    //not allowed!!! memory not allocate by new!!!

    int *pm = new int;
    int *pn = pm;
    *pn = 100;
    cout << "pm and pn: " << pm << "  " << pn << endl;
    cout << "*pm and *pn: " << *pm << "  " << *pn << endl;
    delete pn;
    cout << "pm and pn: " << pm << "  " << pn << endl;
    cout << "*pm and *pn: " << *pm << "  " << *pn << endl;



    system("pause");
}