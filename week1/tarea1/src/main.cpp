#include "Date.h"
using namespace std;

int main() {
  // Date class initialization
  Date testDate(10, 12, 2020);

  // Testing getDate method
  testDate.getDate();

  // Testing getCurrentDate method
  // testDate.getCurrentDate();

  // Testing getDay
  cout << testDate.getDay() << endl;

  // Testing getMonthByNumber
  cout << testDate.getMonthByNumber() << endl;

  // Testing getMonthByName
  cout << testDate.getMonthByName() << endl;

  // Testing getYear
  cout << testDate.getYear() << endl;





  return 0;
}