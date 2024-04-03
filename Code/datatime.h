#include <iostream>

class DataTime {
public:
  int hours;
  int minutes;
  int seconds;
  DataTime() = default;
  DataTime(int x1, int x2, int x3) {
    hours = x1;
    minutes = x2;
    seconds = x3;
  }
  double Diff(DataTime time_) {
    int seconds_this = hours * 3600 + minutes * 60 + seconds;
    int seconds_input = time_.hours * 3600 + time_.minutes * 60 + time_.seconds;
    if (seconds_this > seconds_input) {
      return seconds_this - seconds_input;
    } else {
      return seconds_input - seconds_this;
    }
  }

  DataTime operator=(DataTime time) {
    hours = time.hours;
    minutes = time.minutes;
    seconds = time.seconds;
    return *this;
  }
};