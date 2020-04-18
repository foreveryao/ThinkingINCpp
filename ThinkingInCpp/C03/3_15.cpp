#include<iostream>
#include<string>

using namespace std;

struct Person {
    string name;
    string sex;
    int age;
};

typedef Person* Linkperson;

int main() {
    Person jorker;
    Linkperson linkperson=&jorker;
    linkperson->name="chen";
    linkperson->sex="female";
    linkperson->age=12;
    cout<<linkperson->name<<endl;
    cout<<linkperson->age<<endl;
    return 0;
}
