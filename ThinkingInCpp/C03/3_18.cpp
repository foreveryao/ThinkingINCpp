#include<iostream>

using namespace std;

const int amax=5,bmax=10;
int a[amax],b[bmax];

int main() {
    for(int i=0;i<amax;i++) {
        a[i]=i;
    }
    for(int i=amax;i<bmax;i++) {
        b[i]=i;
    }
    for(int i=0;i<bmax;i++) {
        if(i<amax)  cout<<a[i]<<endl;
        else  cout<<b[i]<<endl;
    }
    return 0;
}
