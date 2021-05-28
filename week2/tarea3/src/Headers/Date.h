#pragma once
#include <iostream>
#include <string>
#include <map>
#include <ctime>

class Date {
  private:
    int day;
    int month;
    int year;
  public:
    // Constructors
    Date() {
      day = 0;
      month = 0;
      year = 0;
    };

    Date(int day, int month, int year) {
      this->day=day;
      this->month=month;
      this->year=year;
    };


    // Getters
    int getDay() {
      return day;
    }
    int getMonth() {
      return month;
    }
    int getYear() {
      return year;
    };

    // Setters
    void setDay(int day) {
      this->day = day;
      return;
    }
    void setMonth(int month) {
      this->month = month;
      return;
    }
    void setYear(int year) {
      this->year = year;
      return;
    }
};