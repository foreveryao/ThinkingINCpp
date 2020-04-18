#include<iostream>

using namespace std;

int main() {
    enum color{
        red=1,
        bule,
        yellow
    };
    for(int i=1;i<4;i++) {
        if(i==red) cout<<red<<endl;
        else if(i==bule) cout<<bule<<endl;
        else cout<<yellow<<endl;
    }
    return 0;
}
