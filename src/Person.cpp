#include "Person.h"

Person::Person(int id, string name, int age) : id(id), name(name), age(age) {}

Person::~Person() {}

void Person::setId(int id) {
    this->id = id;
}

int Person::getId() const {
    return id;
}

void Person::setName(string name) {
    this->name = name;
}

string Person::getName() const {
    return name;
}

void Person::setAge(int age) {
    this->age = age;
}

int Person::getAge() const {
    return age;
}
