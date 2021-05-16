#include "Date.h"

void Date::getDate() {
  displayChoice();

  int format;
  std::cin >> format;
  
  printDate(format, day, month, year);
  
  return;
}

void Date::getCurrentDate() {
  displayChoice();

  time_t currentTime = time(0);
  tm* ltime = localtime(&currentTime);
  int currentYear = 1900 + ltime->tm_year;
  int currentMonth = 1 + ltime->tm_mon;
  int currentDay = ltime->tm_mday;

  int format;
  std::cin >> format;

  printDate(format, currentDay, currentMonth, currentYear);
}

void Date::displayChoice() {
  std::cout << "1. 12/Dec" << std::endl;
  std::cout << "2. 12/December/1980" << std::endl;
  std::cout << "3. 12/12/1980" << std::endl;
  std::cout << "4. 12/12" << std::endl;
  std::cout << "Which format to print? ";

  return;
}

void Date::printDate(int format, int day, int month, int year) {
  if (format == 1) 
  {
    std::cout << day << "/" << months.at(month).substr(0,3) << std::endl;
  } else if (format == 2)
  {
    std::cout << day << "/" << months.at(month) << "/" << year << std::endl;
  } else if (format == 3) 
  {
    std::cout << day << "/" << month << "/" << year << std::endl;
  } else if (format == 4) 
  {
    std::cout << day << "/" << month << std::endl;
  } else {
    std::cout << "Invalid choice!" << std::endl;
  }

  return;
}