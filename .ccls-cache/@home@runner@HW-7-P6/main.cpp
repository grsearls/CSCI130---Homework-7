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
      cin >> current[i];
    }

  for(int i = 0; i < 5; i++)
    {
      power[i] = resistance[i] * current[i] * current[i];
      
      
    }

  cout << setprecision(2);
  cout << setw(10) << "Resistance" << setw(4) << ' ' << setw(10) << "Current" << setw(4) << ' ' << setw(10) << "Power" << endl;

  for (int i = 0; i < 5; i++)
    {
      cout << setw(10) << resistance[i] << setw(4) << ' ' << setw(10) << current[i] << setw(4) << ' ' << setw(10) << power[i] << endl;
    }
  
}


