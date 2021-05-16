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
    std::map<int, std::string> months = {{1, "January"}, {2, "February"}, {3, "March"}, {4, "April"}, {5, "May"}, {6, "June"}, {7, "July"}, {8, "August"}, {9, "September"}, {10, "October"}, {11, "November"}, {12, "December"}};
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
    int getMonthByNumber() {
      return month;
    }
    std::string getMonthByName() {
      return months.at(month);
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

    // Function to print date
    void getDate();

    // Function to print current date
    void getCurrentDate();
  
    // Function to display format choice
    void displayChoice();

    // Function that prints the date given the format
    void printDate(int format, int day, int month, int year);
};