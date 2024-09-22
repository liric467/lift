#pragma once
#include <iomanip>
#include <iostream>



using namespace std;
class Lift
{
	int FirstFl;
	int lastfl;
	int currentfl;
	bool isWorking;

public:
	void setFirstFl(int _FirstFl);
	void setlastfl(int _lastfl);
	void setcurrentfl(int _currentfl);
	void setisWorking(bool _isWorking);
	int getcurrentfl();
	void showinfo();
	



	int getFirstFL();
	int getlastfl();



};

