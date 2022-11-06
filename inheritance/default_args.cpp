#include <iostream>

struct Base {
    virtual int foo(int a = 2) {
        return a;
    }
};

struct Derived : public Base {
    int foo(int a = 5) override {
        return a * 2;
    }
};

int main() {
    Base *pb = new Derived{};
    std::cout << pb->foo() << std::endl; //2
    //вызовет foo из Derived, но аргумент по умолчанию возьмет из Base
    // -- из статического типа, который Base
}