#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    string school;

public:
    Student(string n, int a, string s) : Person(n, a) {
        school = s;
    }

    void display() {
        Person::display();  
        cout << "School: " << school << endl;
    }
};

class Teacher : public Person {
private:
    string subject;

public:
    Teacher(string n, int a, string sub) : Person(n, a) {
        subject = sub;
    }

    void display() {
        Person::display();  
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student student1("Prit", 21, "Tops Technologies");
    Teacher teacher1("Jaydeep sir", 25, "OOPS");

    cout << "Student Details:" << endl;
    student1.display();

    cout << "\nTeacher Details:" << endl;
    teacher1.display();

    return 0;
}
