
#include <iostream>
using namespace std;

class A {
public:
    int a,b;
    void input(){
        cout<<"enter a and b:";
        cin>>a>>b;
    }
};

class B : public A {
public:
    int sum() {
        return a + b;
    }
};

class C : public B {
public:
    void display() {
        cout << "Sum = " << sum();
    }
};

int main() {
    C obj;
    obj.input();
    obj.display();
    return 0;
}

