#pragma once
#include "Video.h"
#include "Season.h"
#include <vector>
#include <iostream>

class Serie:public Video
{
  private:
    std::vector<Season> seasons;

  public:
    Serie();
    Serie(int id, std::string name, float duration, std::string genre, float rating);
    ~Serie(){};

    float getSeasonRating(int season);

    void addSeason(Season season);
    void removeSeason();
    void print();
};