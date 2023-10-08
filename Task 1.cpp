#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	srand((unsigned)time(NULL));
	int random_number = rand() % 100;
	cout << "Guess the number " << endl;
	int number;
	cin >> number;
	while (1)
	{
		if (number > random_number)
		{
			cout << "Your guess is high" << endl;
			cout << "Please enter another number" << endl;
			cin >> number;
		}
		else if (number < random_number)
		{
			cout << "Your guess is low" << endl;
			cout << "Please enter another number" << endl;
			cin >> number;
		}
		else if (number == random_number)
		{
			cout << "Your guess is right" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}