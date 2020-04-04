#include <iostream>

using namespace std;
int main()
{
    //使用new[] 分配内存，应使用delete[] 释放内存
    int *psome = new int[10];
    psome[0] = 15;
    psome[1] = 16;
    psome[2] = 17;

    cout << "psome = " << psome << endl;
    cout << "&psome[0] = " << &psome[0] << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << i << " : " << psome[i] << endl;
    }

    //c++中指针和数组使用方法一样，但是有本质区别，数组名是常量（不能修改，如+1等）
    psome[3] = 33;
    cout << "psome[3] = " << psome[3] << endl;
    cout << "psome[0] = " << psome[0] << endl;
    psome = psome + 1;    //表示指针在当前位置向前移动1位，只能指针如此操作，数组不可以
    cout << "after +1, psome[0] = " << psome[0] << endl;

    psome = psome - 1;    //下一步使用delete，若不-1有问题
    delete[] psome;
    system("pause");
}