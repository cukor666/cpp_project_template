#include "student.h"

Student::Student(string name, int age) {
    this->name = name;
    this->age = age;
    cout << "���ù��캯��" << endl;
}

Student::~Student() {
    cout << "������������\n";
}

void Student::show() {
    cout << "-----------------------" << endl;
    cout << "name: " << this->name << endl;
    cout << "age: " << this->age << endl;
    cout << "-----------------------" << endl;
}
