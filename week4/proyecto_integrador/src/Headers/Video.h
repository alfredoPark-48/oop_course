#pragma once
#include <string>

class Video
{
  protected:
    int id;
    std::string name;
    float duration;
    std::string genre;
    float rating;

  public:
    Video();
    Video(int id, std::string name, float duration, std::string genre, float rating);
    ~Video(){};

    int getId();
    std::string getName();
    float getDuration();
    std::string getGenre();
    float getRating();

    void setId(int id);
    void setName(std::string name);
    void setDuration(float duration);
    void setGenre(std::string genre);
    void setRating(float rating);
};