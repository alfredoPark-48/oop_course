#include "Serie.h"

Serie::Serie()
{
  id = 0;
  name = "";
  duration = 0.0;
  genre = "";
  rating = 0.0;
}

Serie::Serie(int id, std::string name, float duration, std::string genre, float rating)
{
  this->id = id;
  this->name = name;
  this->duration = duration;
  this->genre = genre;
  this->rating = rating;
}

float Serie::getSeasonRating(int season)
{
  return seasons.at(season-1).getSeasonRating();
}

void Serie::addSeason(Season season)
{
  seasons.push_back(season);
  return;
}

void Serie::removeSeason()
{
  seasons.pop_back();
  return;
}

void Serie::print()
{
  for (int i=0; i<seasons.size(); i++)
  {
    std::cout << "---------------------" << std::endl;
    std::cout << "Season " << i+1 << ": " << std::endl;
    seasons.at(i).printEpisodes();
  }
  std::cout << "---------------------" << std::endl;
  return;
}