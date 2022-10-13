#include <iostream>

using namespace std;

void time(int seconds, int hours, int minutes, int secs)
{
  hours = seconds / 3600;

  seconds -= hours * 3600;

  minutes = seconds / 60;

  seconds -= minutes * 60;

  secs = seconds;
}

int main() {

  int hours, seconds, minutes;
  time(3600, hours, minutes, seconds);
  

  
}