// your code here

#include "Bar.h"
#include <string>

potd::Bar::Bar(std::string name) {
    this->f_ = new Foo(name);
}

potd::Bar::Bar(const potd::Bar &other) {
    this->f_ = new Foo(other.f_->get_name());
    // this->f_ = other.f_;
}

potd::Bar::~Bar() {
    delete f_;
}

potd::Bar & potd::Bar::operator=(const potd::Bar &other) {
    // this->f_->operator=(*(other.f_));
    delete f_;
    this->f_ = new potd::Foo(other.f_->get_name());

    // this->f_ = other.f_;
    return *this;
}

std::string potd::Bar::get_name() {
    return f_->get_name();
}


