#include "Episode.h"

Episode::Episode()
{
  name = "";
  rating = 0.0;
  season = 0;
}

Episode::Episode(std::string name, float duration, float rating)
{
  this->name = name;
  this->duration = duration;
  this->rating = rating;
  season = 0;
}

std::string Episode::getName()
{
  return name;
}

float Episode::getRating()
{
  return rating;
}

int Episode::getSeason()
{
  return season;
}

void Episode::setName(std::string name)
{
  this->name = name;
  return;
}

void Episode::setRating(float rating)
{
  this->rating = rating;
  return;
}

void Episode::setSeason(int season)
{
  this->season = season;
  return;
}
