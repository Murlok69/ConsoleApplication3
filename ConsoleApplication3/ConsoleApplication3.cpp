#include <iostream>

using namespace std;

int main() {

	cout << "Enter number 1: ";
	int a;
	cin >> a;

	cout << "Enter number 2: ";
	int b;
	cin >> b;
	

	if ((a + b >= 10 && a + b <= 20))
	{
		cout << "true" << endl;
	}

	else
	{
		cout << "false" << endl;
	}

	const int c = 5, d = 5;

	if (c,d == 10|| c + d == 10)
	{
		cout << "true" << endl;
	} 
	else
	{
		cout << "false" << endl; 
	}

	for (size_t i = 1; i < 50; i++)
	{
		if (i % 2 == 1)
		{
			cout << "Your number is: " <<i << endl;
		}
		

		}


	for (int i = 2; i < 100; i++)
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
				break;
			else if (j + 1 > sqrt(i)) {
				cout << i << " ";

			}

		}




	return 0;
	}


