#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Shift.h"


using namespace std;

class Driver{
 private:
  unsigned int id;
  string name;
  unsigned int maxHours;        // maximum duration of a shift
  unsigned int maxWeekWorkingTime;  // maximum number of hours of work in a week
  unsigned int minRestTime;     // minimum number of rest hours between shifts
  vector<Shift> shifts;         // assigned shifts
 public:
  Driver(unsigned int id, string name, unsigned int maxHours, unsigned int maxWeekWorkingTime, unsigned int minRestTime);
  Driver();
  // get methods
  unsigned int getId() const;
  string getName() const;
  unsigned int getShiftMaxDuration() const;
  unsigned int getMaxWeekWorkingTime() const;
  unsigned int getMinRestTime() const;
  vector<Shift> getShifts() const;

  // set methods
  void setId(unsigned int id);
  void setName(string name);
  void setMaxHours(unsigned int maxHours);
  void setMaxWeekWorkingTime(int maxWeekWorkingTime);
  void setMinRestTime(int minRestTime);

};
