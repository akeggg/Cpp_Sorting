#include <iostream>
#include <ctime>
using namespace std;

void Fill(int arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 30;
		for (int p = 0; p < i; p++)
		{
			if (arr[i] == arr[p])
			{
				i--;
			}
		}
	}
}

void Sort(int arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int a = 0; a < SIZE - 1; a++)
		{
			if (arr[a] > arr[a + 1])
			{
				int temp = arr[a];
				arr[a] = arr[a + 1];
				arr[a + 1] = temp;
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int SIZE = 15;
	int arr[SIZE];

	Fill(arr, SIZE);

	for (int j = 0; j < SIZE; j++)
	{
		cout << arr[j] << " ";
	}

	cout << endl << "=============== СОРТИРОВКА===============" << endl;

	Sort(arr, SIZE);

	for (int n = 0; n < SIZE; n++)
	{
		cout << arr[n] << " ";
	}
}
