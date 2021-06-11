#include "Video.h"

Video::Video() {
  id = 0;
  name = "";
  duration = 0.0;
  genre = "";
}

Video::Video(int id, std::string name, float duration, std::string genre, float rating)
{
  this->id = id;
  this->name = name;
  this->duration = duration;
  this->genre = genre;
  this->rating = rating;
}

int Video::getId()
{
  return id;
}

std::string Video::getName()
{
  return name;
}

float Video::getDuration()
{
  return duration;
}

std::string Video::getGenre()
{
  return genre;
}

float Video::getRating()
{
  return rating;
}

void Video::setId(int id)
{
  this->id = id;
  return;
}

void Video::setName(std::string name)
{
  this->name = name;
  return;
}

void Video::setDuration(float duration)
{
  this->duration = duration;
  return;
}

void Video::setGenre(std::string genre)
{
  this->genre = genre;
  return;
}

void Video::setRating(float rating)
{
  this->rating = rating;
  return;
}