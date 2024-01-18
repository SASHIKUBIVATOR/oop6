#include <iostream>
#include <string>
using namespace std;

// Базовый класс Human, представляющий человека с именем и возрастом
class Human {
private:
    string name;
    int age;

public:
    // Конструктор класса Human для полей
    Human(string n, int a) : name(n), age(a) {}

    // Getter и Setter для свойства name
    string getName() const {
        return name;
    }

    void setName(const string& n) {
        name = n;
    }

    // Getter и Setter для свойства age
    int getAge() const {
        return age;
    }

    void setAge(int a) {
        age = a;
    }
};

// Класс Student, наследующийся от Human
class Student : public Human {
private:
    string university;

public:
    // Конструктор класса Student для полей Human и university
    Student(string n, int a, string s) : Human(n, a), university(s) {}

    // Getter и Setter для свойства university
    string getUniversity() const {
        return university;
    }

    void setUniversity(const string& s) {
        university = s;
    }

    virtual void goesToSchool() {
        cout << getName() << " учится в " << getUniversity() << endl;
    }
};


// Класс Teacher, наследующийся от Human
class Teacher : public Human {
private:
    string subject;

public:
    // Конструктор класса Teacher для полей Human и subject
    Teacher(string n, int a, string s) : Human(n, a), subject(s) {}

    // Getter и Setter для свойства subject
    string getSubject() const {
        return subject;
    }

    void setSubject(const string& s) {
        subject = s;
    }
};
