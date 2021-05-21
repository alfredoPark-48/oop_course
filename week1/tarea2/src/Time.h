#pragma once

class Time {
  private:
    int hour;
    int minutes;
  
  public:
    // Constructors
    Time() {
      hour = 0;
      minutes = 0;
    };
    Time(int hour, int minutes) {
      this->hour = hour;
      this->minutes = minutes;
    };
    ~Time(){};

    // Getters
    int getHour();
    int getMinutes();

    // Setters
    void setHour(int hour);
    void setMinutes(int minutes);
};