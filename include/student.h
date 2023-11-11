#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int    age;

public:
    Student(string name, int age);
    ~Student();
    void show();
};

#endif