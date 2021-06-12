#include "Movie.h"

Movie::Movie()
{
  id = 0;
  name = "";
  duration = 0.0;
  genre = "";
  rating = 0.0;
  director = "";
}

Movie::Movie(int id, std::string name, float duration, std::string genre, float rating, std::string director)
{
  this->id = id;
  this->name = name;
  this->duration = duration;
  this->genre = genre;
  this->rating = rating;
  this->director = director;
}

std::string Movie::getDirector()
{
  return director;
}

void Movie::setDirector(std::string director)
{
  this->director = director;
  return;
}

void Movie::print()
{
  std::cout << "'" << name << "' Rating: " << rating << std::endl;
}