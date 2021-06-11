#include "Video.h"
#include "Season.h"
#include <vector>

class Serie:protected Video
{
  private:
    std::vector<Season> seasons;

  public:
    Serie();
    Serie(int id, std::string name, float duration, std::string genre, float rating, Season season);
    ~Serie(){};
};