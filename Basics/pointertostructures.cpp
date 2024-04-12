 	
// pointers to structures
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
  string title;
  int year;
};

int main ()
{
  string mystr;

  movies_t amovie;
  movies_t * pmovie;
  pmovie = &amovie;

  pmovie->title = "KHNP";
  pmovie->year  = 1990;

  cout << "\nYou have entered:\n";
  cout << pmovie->title;
  cout << " (" << pmovie->year << ")\n";

  movies_t mymovie;
  mymovie.title = "HAHK";
  mymovie.year = 1989;

  cout << "\nYou have again entered:\n";
  cout << mymovie.title;
  cout << " (" << mymovie.year << ")\n";

  return 0;
}