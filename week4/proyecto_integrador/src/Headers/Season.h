#pragma once
#include "Episode.h"
#include <vector>
#include <iostream>

class Season
{
  private:
    std::vector<Episode> list;
    int number;
  public:
    Season();
    Season(int number);
    ~Season(){};
    
    int getSeasonNumber();

    void setSeasonNumber(int number);
    void addEpisode(Episode newEpisode);
    void removeEpisode();
    void printEpisodes();
};