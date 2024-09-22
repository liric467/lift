#include "lift.h"




void Lift::setFirstFl(int _FirstFl)
{
	FirstFl = _FirstFl;
}
void Lift::setlastfl(int _lastfl)
{
	lastfl = _lastfl;
}
void Lift::setcurrentfl(int _currentfl)
{
	currentfl = _currentfl;
}
void Lift::setisWorking(bool _isWorking)
{
	isWorking = _isWorking;
}
int Lift::getFirstFL()
{
	return FirstFl;
}
int Lift::getlastfl()
{
	return lastfl;
}
int Lift::getcurrentfl()
{
	return currentfl;
}
void Lift::showinfo()
{
	cout << "Первый этаж: " << FirstFl << endl;
	cout << "Последний этаж: " << lastfl << endl;
	cout << "Текущий этаж: " << currentfl << endl;
	if (isWorking)
	{
		cout << "лифт работает" << endl;
	}
	else
	{
		cout << "лифт неисправен" << endl;
	}
}
