#pragma once
#include "Video.h"
#include <string>
#include <iostream>

class Movie : protected Video
{
  private:
    std::string director;

  public:
    Movie();
    Movie(int id, std::string name, float duration, std::string genre, float rating, std::string director);
    ~Movie(){};

    std::string getDirector();
    void setDirector(std::string director);
    void print();
};