#include "Season.h"

Season::Season()
{
  number = 0;
}

Season::Season(int number)
{
  this->number = number;
}

int Season::getSeasonNumber()
{
  return number;
}

void Season::setSeasonNumber(int number)
{
  this->number = number;
  return; 
}

void Season::addEpisode(Episode newEpisode)
{
  newEpisode.setSeason(number);
  list.push_back(newEpisode);

  return;
}

void Season::removeEpisode()
{
  list.pop_back();
  return;
}

void Season::printEpisodes()
{
  for (int i=0; i<list.size(); i++)
  {
    std::cout << i+1 << ". " << list.at(i).getSeason() << std::endl;
  }
}