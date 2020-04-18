#include <iostream>
using namespace std;

union Packed { // Declaration similar to a class
    char i;
    short j;
    int k;
    long l;
    float f;
    double d;  
    // The union will be the size of a 
    //   // double, since that's the largest element 
    };

int main() {
    //cout<<sizeof(Packed)<<endl;
    Packed k;
    k.i=102;
    cout<<k.i<<endl;
}
