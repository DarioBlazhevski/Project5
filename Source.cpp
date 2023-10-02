#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

	int c, m, s;

	cout << "Vnesi broj na sekundi : ";
	cin >> s;

	c = s / 3600;

	m = (s % 3600) / 60;

	s = (s % 3600) % 60;

	cout << setw(2) << setfill('0') << c << " : " << setw(2) << setfill('0') << m << " : " << setw(2) << setfill('0') << s << endl;


	cin.get(); cin.get();

	return 0;
}