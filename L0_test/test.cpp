#include <iostream>
using namespace std;

void print(const string& str)
{
    cout<<str<<endl;
}

void print_foo()
{
    for(int i=0; i<10; i++)
    {
        cout << i << endl;
    }
}


int main()
{
    string s = "Hello World!";
    print(s);
    print_foo();
    system("pause");
    return 0;
}