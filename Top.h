
#include <iostream>
using namespace std;


class Top

{ 
  public:	 
	  enum RENKLER
	  {
		  BLACK = 0,
		  RED = 4,
		  LIGHTBLUE = 9,
		  LIGHTGREEN = 10,
		  LIGHTCYAN = 11,
		  LIGHTRED = 12,
		  LIGHTMAGENTA = 13,
		  YELLOW = 14,
		  WHITE = 15
	  };
	  void topCikar();
	  void renkAta(int yazirenk);
	  Top();
	
  private:
	  int renk;
	  char top = 79;
	
};









