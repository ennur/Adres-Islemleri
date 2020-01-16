#include "Top.h"
#include <iostream>
#include<Windows.h>


 Top::Top()
{
	renk = 9 + (rand() % 6);

}
void Top::topCikar()
{
	renkAta(renk);
	cout << " " << top << " " << this << endl;
	renkAta(WHITE);
	
}

void Top::renkAta(int yazirenk)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), yazirenk);
}



