#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
public:
    Student(string name, int age);
    void setAge(int age);
    void setName(string name);
    void printStudentInfo() const;
    string getName() const;
    int getAge() const;

private:
    string Name;
    int Age;
};

#endif // STUDENT_H
