#include<iostream>

using namespace std;

typedef struct {
    int i,j,k;
}ThreeDpoint;

int main() {
    //cout<<sizeof(ThreeDpoint)<<endl;
    ThreeDpoint t;
    cout<<(long)&t.i<<endl;
    cout<<(long)&t.j<<endl;
    return 0;
}
