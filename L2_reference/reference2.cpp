#include <iostream>
using namespace std;

typedef struct Stag{int a,b,c,d;} S;

int main()
{
    //object 和其 reference 大小相同，地址相同（然并卵，都是编译器给的假象）
    
    double d = 0;
    double* p = &d;
    double& r = d;

    cout<<"sizeof d: "<<sizeof(d)<<" sizeof p: "<<sizeof(p)<<" sizeof r: "<<sizeof(r)<<endl;
    cout<<"p: "<<p<<" &d: "<<&d<<" &r"<<&r<<endl;

    S s;
    cout<<"size of s: "<<sizeof(s)<<endl;

    S* ps = &s;
    S& rs = s;
    cout<<"sizeof s: "<<sizeof(s)<<" sizeof ps: "<<sizeof(ps)<<" sizeof rs: "<<sizeof(rs)<<endl;
    cout<<"ps: "<<ps<<" &s: "<<&s<<" &rs"<<&rs<<endl;

    return 0;
}