#include <iostream>

struct A {
  int a_;
  A(int a) : a_(a) {}
  //A& operator=(const A& rhs) {a_ = rhs.a_; }
};

struct B : public A {
  int b_;
  B(int b) : A(b / 2), b_(b) {}
};

std::ostream &operator<<(std::ostream &os, const B &b) {
  os << b.a_ << " " << b.b_;
  return os;
}

int main() {
  B b1(10); // a_ = 5, b_ = 10
  B b2(8);  // a_ = 4, b_ = 8
  A &a_ref = b2; //a_ = 4, b_ = 8; просто другое имя
  a_ref = b1; // a_ = 5, b_ = 8, WAT??
  //copy assignment called
  std::cout << b2 << std::endl;
}