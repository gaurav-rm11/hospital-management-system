#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
protected:
    int id;
    string name;
    int age;

public:
    Person(int id, string name, int age);
    virtual ~Person();

    void setId(int id);
    int getId() const;

    void setName(string name);
    string getName() const;

    void setAge(int age);
    int getAge() const;
};

#endif
