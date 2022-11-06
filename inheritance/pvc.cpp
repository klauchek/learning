#include <iostream>

struct Base {
    Base() { from_func(); }
    //Base() { do_it(); } //линкер выдал ошибку, тк компилятор девиртуализовал: смог найти тело и не пошел через vtable
    //Base() { safe();
    virtual void do_it() = 0;
    void from_func() { do_it(); }
    virtual void safe() { std::cout << "safe from base!" << std::endl; }
    void call_safe() { safe(); } //виртуальная таблица уже успела заполниться, будет из derived
};

struct Derived : public Base {
    void do_it() override {
        std::cout << "from derived!" << std::endl;
    }
    void safe() {
        std::cout << "safe from derived!" << std::endl;
    }
};

int main() {
    Derived d;
    d.call_safe();
}