#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x, y;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if ((y >= 1 && y <= 3 && x >= -1 && x <= 1) ||
			(x * x + y * y <= 1) ||
			(y >= -2 && y <= x - 1 && y <= -x - 1))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = 4. * rand() / RAND_MAX - 2;
		y = 4. * rand() / RAND_MAX - 2;

		if ((y <= -x * x + 2) && (y >= x) && (y <= 0) ||
			(y <= -x * x + 2) && (y <= x) && (y >= 0))

			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}

	return 0;
}