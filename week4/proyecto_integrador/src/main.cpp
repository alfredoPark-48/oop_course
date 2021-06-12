#include <iostream>
#include <ctime>
#include "Headers/Video.h"
#include "Headers/Video.cpp"
#include "Headers/Season.h"
#include "Headers/Season.cpp"
#include "Headers/Episode.h"
#include "Headers/Episode.cpp"
#include "Headers/Serie.h"
#include "Headers/Serie.cpp"
using namespace std;

int main()
{
  srand(time(NULL));

  Episode e1("A", 24, 4.3);
  Episode e2("B", 24, 4.2);
  Episode e3("C", 24, 4.1);
  Episode e4("D", 24, 4);

  Season s1(1);
  s1.addEpisode(e1);
  s1.addEpisode(e2);
  s1.addEpisode(e3);
  s1.addEpisode(e4);

  Episode e5("E", 24, 3.5);
  Episode e6("F", 24, 3.5);
  Episode e7("G", 24, 3.5);
  Episode e8("H", 24, 3.5);

  Season s2(2);
  s2.addEpisode(e5);
  s2.addEpisode(e6);
  s2.addEpisode(e7);
  s2.addEpisode(e8);

  Serie serie1(rand() % 99999, "Serie 1", 40.2, "Sci-Fi", 4.5);
  serie1.addSeason(s1);  
  serie1.addSeason(s2);  


  serie1.print();

  return 0;
}
