#include "Person.h"

int Person::getTotalAncestors() {
  int totalAncestors = 0;
  Person* pointer = mom;

  while (pointer != nullptr) {
    totalAncestors++;
    pointer = pointer->mom;
  }
  
  return totalAncestors;
}

std::string Person::getOldestAncestor() {
  std::string name = "";
  Person* pointer = mom;
  int age = mom->getAge();

  while (pointer != nullptr) {
    if (age < pointer->getAge()) {
      age = pointer->getAge();
      name = pointer->getName();
    }

    pointer = pointer->mom;
  }

  return name;
}

std::string Person::getYoungestAncestor() {
  std::string name = "";
  Person* pointer = mom;
  int age = mom->getAge();

  while (pointer != nullptr) {
    if (age > pointer->getAge()) {
      age = pointer->getAge();
      name = pointer->getName();
    }

    pointer = pointer->mom;
  }

  return name;
}

std::string Person::whoseDad(std::string name) {
  Person* pointer = mom;

  while (pointer != nullptr) {
    if (pointer->dad ==nullptr) {
      pointer = pointer->mom;
    }
    if (name == pointer->dad->getName()) {
      return pointer->getName();
    }
    pointer = pointer->mom;
  }

  return "NOT FOUND!";
}

std::string Person::getGrandmother() {
  Person *grandmother = mom->mom;

  return grandmother->getName();
}