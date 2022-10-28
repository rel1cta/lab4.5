#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 1; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if ((y >= (x - 2) * (x - 2) - 3 && y <= x && y >= 0) ||
			(y >= (x - 2) * (x - 2) - 3 && y <= -x && y < 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
		for (int i = 0; i < 10; i++)
		{
			x = -1 + rand() * (5+1) / RAND_MAX;
			y = -3 + rand() * (5+3) / RAND_MAX;
			if ((y >= (x - 2) * (x - 2) - 3 && y <= x && y >= 0) ||
				(y >= (x - 2) * (x - 2) - 3 && y <= -x && y < 0))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}