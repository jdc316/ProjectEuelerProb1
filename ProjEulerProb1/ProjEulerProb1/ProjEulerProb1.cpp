#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int sum = 0;
	int end;

	for (int i = 0; i < 1000; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}

	cout << sum << endl;

	cout << "Hit any key and enter to continue . . . ";
	cin >> end;

	return 0;
}