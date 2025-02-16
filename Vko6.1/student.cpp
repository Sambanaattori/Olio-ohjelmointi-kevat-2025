#include "student.h"

Student::Student(string name, int age) : Name(name), Age(age) {}

void Student::setName(string name)
{
    Name = name;
}

void Student::setAge(int age)
{
    Age = age;
}

void Student::printStudentInfo() const
{
    cout <<"Name: "<<Name<<", Age: "<<Age<<endl;
}

string Student::getName() const
{
    return Name;
}

int Student::getAge() const
{
    return Age;
}
