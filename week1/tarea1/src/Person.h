#pragma once
#include "Date.h"

class Person {
  private:
    std::string name;
    Date birthdate;
    Person* dad;
    Person* mom;
  public:
    // Constructors
    Person(){
      name="";
      birthdate.setDay(0);
      birthdate.setMonth(0);
      birthdate.setYear(0);
      dad = nullptr;
      mom = nullptr;
    };

    Person(std::string name, Date birthdate) {
      this->name=name;
      this->birthdate=birthdate;
      dad = nullptr;
      mom = nullptr;
    }

    // Getters
    std::string getName() {
      return name;
    }
    int getAge() {
      return 2021-birthdate.getYear();
    }
    Person getMom() {
      return *mom;
    }
    Person getDad() {
      return *dad;
    }

    // Setters
    void setName(std::string name) {
      this->name=name;
      return;
    }
    void setBirthdate(Date birthdate) {
      this->birthdate=birthdate;
      return;
    }
    void setMom(Person *newMom) {
      if (mom == nullptr) {
        mom = newMom;
      } else {
        Person* pointer = mom;
        while (pointer->mom != nullptr) {
          pointer = pointer->mom;
        }
        pointer->mom = newMom;
      }

      return;
    }
    void setDad(Person *newDad) {
      if (dad == nullptr) {
        dad = newDad;
      } else {
        Person* pointer = dad;
        while (pointer->dad != nullptr) {
          pointer = pointer->dad;
        }
        pointer->dad = newDad;
      }

      return;
    }

    // Function that returns total ancestors
    int getTotalAncestors();

    // Function that prints names of all ancestors
    void printAncestorNames();

    // Function taht returns oldest ancestor
    std::string getOldestAncestor();

    // Function that returns youngest ancestor
    std::string getYoungestAncestor();

    // Function that returns person who has the dad's name @ argument
    std::string whoseDad(std::string name);

    // Function that returns grandmother's name
    std::string getGrandmother();
  
};