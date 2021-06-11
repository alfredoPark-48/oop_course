#pragma once
#include "Video.h"
#include "Season.h"

class Episode
{
  private:
    std::string name;
    float duration;
    float rating;
    int season;

  public:
    Episode();
    Episode(std::string name, float duration, float rating);
    ~Episode(){};

    std::string getName();
    float getRating();
    int getSeason();

    void setName(std::string name);
    void setRating(float rating);
    void setSeason(int season);
};