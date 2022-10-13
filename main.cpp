#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
  double resistance[5] = {16, 27, 39, 56, 81};
  double current[5];
  double power[5];

  for(int i = 0; i < 5; i++)
    {
      power[i] = resistance[i] * current[i] * current[i];
      
      
    }

  
}


