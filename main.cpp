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

// Класс Coresh, наследующийся от Human
class Coresh : public Human {
private:
    string hobby;

public:
    // Конструктор класса Coresh для полей Human и hobby
    Coresh(string n, int a, string h) : Human(n, a), hobby(h) {}

    // Getter и Setter для свойства hobby
    string getHobby() const {
        return hobby;
    }

    void setHobby(const string& h) {
        hobby = h;
    }
};

class Person {
private:
    string character;

public:
    Person(string c) : character(c) {}

    string getCharacter() {
        return character;
    }

    void setCharacter(string _character) {
        character = _character;
    }

    virtual void doHobby() = 0;
};

// Класс WhistleMan, наследующийся от Student и Person
class WhistleMan : public Student, public Person {
public:
    // Конструктор класса whistleMan для полей Student, Person
    WhistleMan(string n, int a, string s, string c) : Student(n, a, s), Person(c) {}

    void fighteverybody() {
        cout << getName() << " дерётся со всеми\n";
    }

    void doHobby() override {
        cout << getName() << " играет в баскетболл\n";
    }

    void goesToSchool() override {
        cout << "не любит ходить в вузик\n";
    }
};

int main() {
    // Создание объектов различных классов
    Human person("Лешик", 19);
    Student student("Сашик", 19, "ДВФУ");
    Teacher teacher("МАО", 35, "матанализ");
    Coresh coresh("Гриша", 19, "математикой");

    // Вывод свойств объектов различных классов
    cout << "Человек: " << person.getName() << ", возраст: " << person.getAge() << endl;
    cout << "Студент: " << student.getName() << ", возраст: " << student.getAge()
         << ", Университет: " << student.getUniversity() << endl;
    cout << "Преподаватель: " << teacher.getName() << ", возраст: " << teacher.getAge()
         << ", Subject: " << teacher.getSubject() << endl;
    cout << "Кореш: " << coresh.getName() << ", возраст: " << coresh.getAge()
         << ", любит заниматься: " << coresh.getHobby() << endl;

    // Создание объекта whistleMan и вывод его свойств
    WhistleMan whistleMan("Антон", 19, "ИМКТ", "куряга");
    cout << whistleMan.getName() << " - " << whistleMan.getCharacter() << endl;
    whistleMan.goesToSchool();
    whistleMan.fighteverybody();
    whistleMan.doHobby();

    return 0;
}
