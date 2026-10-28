#include<iostream>
using namespace std;
// virtual function code

class A {
public:
    virtual void add() {
        cout << "Addition function";
    }
};

class B : public A {
public:
    void add() {
        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << "Sum = " << a + b;
    }
};

int main() {
    A *ptr;
    B obj;
    ptr = &obj;
    ptr->add();

    return 0;
}
