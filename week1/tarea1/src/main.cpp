#include "Date.h"
#include "Person.h"
using namespace std;

int main() {
  // Setting Camila's family
  Date camilaBirthdate(12,1,2003);
  Person camila("Camila", camilaBirthdate);

  Date soledadBirthdate(3,12,1987);
  Person soledad("Soledad", soledadBirthdate);

  Date pedroBirthdate1(4,11,1986);
  Person pedro1("Pedro", pedroBirthdate1);

  camila.setMom(&soledad);
  camila.setDad(&pedro1);

  // Setting Soledad's family
  Date lauraBirthdate(3,6,1968);
  Person laura("Laura", lauraBirthdate);

  soledad.setMom(&laura);

  // Setting Laura's family
  Date leticiaBirthdate(14, 11, 1993);
  Person leticia("Leticia", leticiaBirthdate);

  Date pedroBirthdate2(21, 7, 1968);
  Person pedro2("Pedro", pedroBirthdate2);

  laura.setMom(&leticia);
  laura.setDad(&pedro2);

  // Setting Leticia's family
  Date saraBirthdate(28,1,1924);
  Person sara("Sara", saraBirthdate);

  Date javierBirthdate(24, 1, 1924);
  Person javier("Javier", javierBirthdate);

  leticia.setMom(&sara);
  leticia.setDad(&javier);

  // Solutions
  cout << "1. How many ancestors does Camila have? " << camila.getTotalAncestors() << endl; 
  cout << "2. What is Camila's grandmother's name? " << camila.getGrandmother() << endl;
  cout << "3. Who is Camila's youngest ancestor? " << camila.getYoungestAncestor() << endl;
  cout << "4. Who is Camila's oldest ancestor? " << camila.getOldestAncestor() << endl;
  cout << "5. Javier is whose dad? " << camila.whoseDad("Javier") << endl;

  return 0;
}