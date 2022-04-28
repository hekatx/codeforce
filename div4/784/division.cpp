#include <iostream>

using namespace std;

string getDivision(int rating) 
{
  int i;
  struct {
        int rating;
        const char *division;
    } divisionList[] = {
        { 1399, "Division 4" },
        { 1599, "Division 3" },
        { 1899, "Division 2" },
        { 1900, "Division 1" },
    };
   for (i=0; i<3 && rating > divisionList[i].rating; i++) ;
return divisionList[i].division;
}

int main() {
  int testCases, rating;
  cin >> testCases;
  for (int i = 0; i < testCases; i++) 
  {
    cin >> rating;
    cout << getDivision(rating) << "\n";
  }
  return 0;
}