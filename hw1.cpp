#include <iostream>
#include "lift.h"
#include <cstring>
#include <random>


using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	Lift one;

	
	one.setFirstFl(1);
	one.setlastfl(15);
	one.setcurrentfl(rand() % 15);

	one.showinfo();
	
	
	
	return 0;
}