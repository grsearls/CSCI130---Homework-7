#include <iostream>
using namespace std;



int main()
{

  int n;
  int junk[n];
  int least = -1;
  int days;
  cin >> n;

  for(int i = 0; i < 0; i++)
    {
      cin >> junk[i];

      if(junk[i] < least)
      {
        least = junk[i];
        days = i;
      }
    }

  cout << days << endl;

  return 0;
  
}


