#include "ElementLine.h"
#include "Time.h"
#include "LineStatistics.h"
#include <iostream>
using namespace std;

int minimumWait(LineStatistics* head);
int maximumWait(LineStatistics* head);
void average(LineStatistics* head);
int minimumAttention(LineStatistics* head);
int maximumAttention(LineStatistics* head);
void averageAttention(LineStatistics* head);
string whoIsAfter(LineStatistics* head, string name);
string whoIsBefore(LineStatistics* head, string name);

int main() {
  // Luisa
  Time luisaStartTime(11, 0);
  Time luisaEndTime(12, 0);
  ElementLine luisaData("Luisa", luisaStartTime, luisaEndTime);
  
  // Pedro
  Time pedroStartTime(11, 25);
  Time pedroEndTime(12,16);
  ElementLine pedroData("Pedro", pedroStartTime, pedroEndTime);

  // Juana
  Time juanaStartTime(12, 15);
  Time juanaEndTime(13, 22);
  ElementLine juanaData("Juana", juanaStartTime, juanaEndTime);

  // Roberto
  Time robertoStartTime(12,17);
  Time robertoEndTime(13,20);
  ElementLine robertoData("Roberto", robertoStartTime, robertoEndTime);

  // Rubi
  Time rubiStartTime(12,54);
  Time rubiEndTime(14,0);
  ElementLine rubiData("Rubí", rubiStartTime, rubiEndTime);

  // Elements
  LineStatistics* luisa = new LineStatistics();
  LineStatistics* pedro = new LineStatistics();
  LineStatistics* juana = new LineStatistics();
  LineStatistics* roberto = new LineStatistics();
  LineStatistics* rubi = new LineStatistics();

  // Linking elements
  luisa->data = luisaData;
  luisa->next = pedro;
  pedro->data = pedroData;
  pedro->next = juana;
  juana->data = juanaData;
  juana->next = roberto;
  roberto->data = robertoData;
  roberto->next = rubi;
  rubi->data = rubiData;
  rubi->next = nullptr;

  // a. ¿Cuál fue el tiempo mínimo entre llegadas en minutos?
  cout << minimumWait(luisa) << endl;

  // b. ¿Cuál fue el tiempo máximo entre llegadas en minutos?
  cout << maximumWait(luisa) << endl;

  // c. ¿Cuál fue el tiempo promedio entre llegadas?
  average(luisa);

  // d. ¿Cuál fue el tiempo mínimo de atención (diferencia entre la hora de salida y de entrada)?
  cout << minimumAttention(luisa) << endl;

  // e. ¿Cuál fue el tiempo máximo de atención (diferencia entre la hora de salida y de entrada)?
  cout << maximumAttention(luisa) << endl;

  // f. ¿Cuál fue el tiempo promedio de atención (diferencia entre la hora de entrada y de salida)?
  averageAttention(luisa);

  // g. ¿Quién llegó después de X? Donde X puede ser cualquiera de los nombres de la fila
  cout << whoIsAfter(luisa, "Juana") << endl;

  // h. ¿Quién llegó antes de X? Donde X puede ser cualquiera de los nombres de la fila
  cout << whoIsBefore(luisa, "Juana") << endl;


  // Deleting from heap
  delete luisa;
  delete pedro;
  delete juana;
  delete roberto;
  delete rubi;

  return 0; 
}

// Function that returns name of the person after the name given @ argument
std::string whoIsAfter(LineStatistics* head, std::string name)
{
  LineStatistics* temp = head;
  while (temp != nullptr)
  {
    if (temp->data.getName() == name)
    {
      return temp->next->data.getName() + " is after " + name;
    }
    temp = temp->next;
  }
  return name + " was not found!";
}

// Function that returns name of the person before the name given @ argument
std::string whoIsBefore(LineStatistics* head, std::string name)
{
  LineStatistics* temp = head;
  LineStatistics* tempNext = temp->next;

  while (temp != nullptr)
  {
    if (tempNext->data.getName() == name)
    {
      return temp->data.getName() + " is before " + name; 
    }
    temp = temp->next;
    tempNext = temp->next;
  }

  return name + " was not found!";
}