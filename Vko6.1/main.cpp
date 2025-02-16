#include "student.h"
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void addStudent(vector<Student>& students);
void printAllStudents(const vector<Student>& students);
void sortByName(vector<Student>& students);
void sortByAge(vector<Student>& students);
void findStudent(const vector<Student>& students, const string& name);

int main ()
{
    int selection =0;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            addStudent(studentList);
            break;

        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden nimet
            printAllStudents(studentList);
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sortByName(studentList);
            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sortByAge(studentList);
            break;
        case 4:
        {
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            string name;
            cout << "Enter students name for search: ";
            cin >> name;
            findStudent(studentList, name);
            break;
        }
        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
    }while(selection < 5);

    return 0;
}

void addStudent(vector<Student>& students)
{
    string name;
    int age;
    cout << "Enter students name: ";
    cin >> name;
    cout << "Enter students age: ";
    cin >> age;

    students.emplace_back(name, age);
    cout << "Student added succesfully!" << endl;
}

void printAllStudents(const vector<Student>& students)
{
    if (students.empty())
    {
        cout << "No students added yet" << endl;
        return;
    }

    for (const auto& student : students)
    {
        student.printStudentInfo();
    }
}

void sortByName(vector<Student>& students)
{
    if (students.empty())
    {
        cout << "No students added yet" << endl;
        return;
    }

    sort(students.begin(), students.end(), [](const Student& a, const Student& b)
         {
             return a.getName() < b.getName();
         });

    cout << "Students sorted by name" << endl;
    printAllStudents(students);
}

void sortByAge(vector<Student>& students)
{
    if (students.empty())
    {
        cout << "No students added yet"<< endl;
        return;
    }

    sort(students.begin(), students.end(), [](const Student& a, const Student& b)
         {
             return a.getAge() < b.getAge();
         });

    cout << "Students sorted by age" << endl;
    printAllStudents(students);
}

void findStudent(const vector<Student>& students, const string& name)
{
    auto it = find_if(students.begin(), students.end(), [&](const Student& student)
                      {
                          return student.getName() == name;
                      });

    if (it != students.end())
    {
        cout << "Student found: ";
        it->printStudentInfo();
    } else
    {
        cout << "Student not found!" << endl;
    }
}
