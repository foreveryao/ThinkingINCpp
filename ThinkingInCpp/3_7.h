#include<iostream>
#include<string>

using namespace std;

void f(string *p) {
    cout<<"1.*p"<<" "<<*p<<endl;
    *p="f";
    cout<<"2.*p"<<" "<<*p<<endl;
}

void f1(string &p) {
    cout<<"3.p"<<" "<<p<<endl;
    p="f1";
    cout<<"4.p"<<" "<<p<<endl;
}
