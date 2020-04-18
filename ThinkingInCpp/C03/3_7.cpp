#include<iostream>
#include<string>
#include "3_7.h"

using namespace std;

int main() {
    string str="a";
    f(&str);
    cout<<str<<endl;
    f1(str);
    cout<<str<<endl;
    return 0;
}
