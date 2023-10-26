#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void InitRand()
{
	srand((unsigned int)time(NULL));
}

int main()
{
	int* array;
	int input;
	cout << "配列の要素数を入力 > " << flush;
	cin >> input;
	array = new int[input];
	InitRand();

	for (int i = 0; i < input; i++)
	{
		array[i] = rand() % 99 + 1;
	}

	for (int i = 0; i < input; i++)
	{
		cout << array[i];
		if (i != input - 1)
		{
			cout << ", ";
		}
	}
	cout << endl;

	int tmp;

	for (int i = 0; i < input; i++)
	{
		for (int j = i + 1; j < input; j++)
		{
			if (array[i] > array[j])
			{
				tmp = array[j];
				array[j] = array[i];
				array[i] = tmp;
			}
		}
	}
	cout << "/-----バブルソート-----/" << endl;
	for (int i = 0; i < input; i++)
	{
		cout << array[i];
		if (i != input - 1)
		{
			cout << ", ";
		}
	}
	cout << endl;

	delete[] array;
}