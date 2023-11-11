#include "student.h"

Student::Student(string name, int age) {
    this->name = name;
    this->age = age;
    cout << "调用构造函数" << endl;
}

Student::~Student() {
    cout << "调用析构函数\n";
}

void Student::show() {
    cout << "-----------------------" << endl;
    cout << "name: " << this->name << endl;
    cout << "age: " << this->age << endl;
    cout << "-----------------------" << endl;
}
